/*
    ------------------------------------------------------------------------
    🔍 What this program does
    ------------------------------------------------------------------------
    A "Suffix Array" is a sorted array of all suffixes of a given string.

    Example:
        Text = "banana"
        All suffixes:
            0: banana
            1: anana
            2: nana
            3: ana
            4: na
            5: a
        Sorted suffixes:
            5: a
            3: ana
            1: anana
            0: banana
            4: na
            2: nana
        Hence suffix array = [5, 3, 1, 0, 4, 2]

    Once we have a suffix array, we can do:
      - Fast substring search (binary search)
      - Find repeated substrings
      - Compute Longest Common Prefix (LCP) efficiently

    This program builds both:
      ✅ Suffix Array  (in O(n log n))
      ✅ LCP Array     (in O(n))
      ✅ Allows Pattern Search using binary search.

    ------------------------------------------------------------------------
    👶 Why it’s beginner-friendly
    ------------------------------------------------------------------------
    - Uses standard arrays and structs (no advanced libraries).
    - Clean function separation.
    - Lots of comments explaining each algorithmic step.
    - You’ll learn sorting, ranking, string comparison, and binary search.

    ------------------------------------------------------------------------
    💡 Time Complexity
    ------------------------------------------------------------------------
      Build Suffix Array : O(n log n)
      Build LCP Array    : O(n)
      Pattern Search     : O(m log n)
*/

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

/* -------------------------------------------------------------------------
   STRUCTURE: represents one suffix during sorting.
   Each suffix has:
     - index: where this suffix starts in the original string
     - rank[0]: rank based on first half of the substring
     - rank[1]: rank based on the next half
   ------------------------------------------------------------------------- */
typedef struct {
  int index;
  int rank[2];
}
Suffix;

/* -------------------------------------------------------------------------
   Comparator for qsort().
   Sorts suffixes by (rank[0], rank[1]).
   ------------------------------------------------------------------------- */
int cmpSuffix(const void * a,
  const void * b) {
  const Suffix * sa = (const Suffix * ) a;
  const Suffix * sb = (const Suffix * ) b;
  if (sa -> rank[0] == sb -> rank[0])
    return sa -> rank[1] - sb -> rank[1];
  return sa -> rank[0] - sb -> rank[0];
}

/* -------------------------------------------------------------------------
   FUNCTION: buildSuffixArray
   PURPOSE : Constructs the suffix array in O(n log n) time.

   Steps:
     1. Assign initial ranks based on first 2 characters.
     2. Sort suffixes by these ranks.
     3. For k = 4, 8, 16, ... double the substring length each time:
         - Reassign new ranks based on previous sorting.
         - Sort again using updated ranks.
   ------------------------------------------------------------------------- */
int * buildSuffixArray(const char * txt, int n) {
  // Allocate space for suffix structures
  Suffix * suffixes = malloc(n * sizeof(Suffix));
  int * ind = malloc(n * sizeof(int)); // maps index → suffix array position

  // Step 1: Initialize ranks for each suffix
  for (int i = 0; i < n; i++) {
    suffixes[i].index = i;
    suffixes[i].rank[0] = txt[i]; // rank by first char
    suffixes[i].rank[1] = (i + 1 < n) ? txt[i + 1] : -1; // next char
  }

  // Step 2: Initial sort based on first 2 characters
  qsort(suffixes, n, sizeof(Suffix), cmpSuffix);

  int * suffixArr = malloc(n * sizeof(int));

  // Step 3: Repeat sorting with doubled prefix length (k = 4, 8, 16…)
  for (int k = 4; k < 2 * n; k *= 2) {
    int rank = 0; // current rank
    int prev_rank = suffixes[0].rank[0];
    suffixes[0].rank[0] = rank; // first suffix gets rank 0
    ind[suffixes[0].index] = 0; // store position in suffix array

    // Assign new ranks based on previous rank pairs
    for (int i = 1; i < n; i++) {
      if (suffixes[i].rank[0] == prev_rank &&
        suffixes[i].rank[1] == suffixes[i - 1].rank[1]) {
        // same as previous → same rank
        suffixes[i].rank[0] = rank;
      } else {
        // different → new rank
        prev_rank = suffixes[i].rank[0];
        suffixes[i].rank[0] = ++rank;
      }
      ind[suffixes[i].index] = i;
    }

    // Assign next rank for each suffix
    for (int i = 0; i < n; i++) {
      int nextIndex = suffixes[i].index + k / 2;
      suffixes[i].rank[1] = (nextIndex < n) ?
        suffixes[ind[nextIndex]].rank[0] : -1;
    }

    // Re-sort by first and next rank
    qsort(suffixes, n, sizeof(Suffix), cmpSuffix);
  }

  // Extract final suffix array
  for (int i = 0; i < n; i++)
    suffixArr[i] = suffixes[i].index;

  free(suffixes);
  free(ind);
  return suffixArr;
}

/* -------------------------------------------------------------------------
   FUNCTION: buildLCPArray
   PURPOSE : Builds the LCP (Longest Common Prefix) array in O(n).
   METHOD  : Kasai’s Algorithm

   Explanation:
     - LCP[i] = length of longest common prefix between
                suffixArr[i] and suffixArr[i+1].
     - Uses the fact that LCP between neighbors differs by ≤1 each step.
   ------------------------------------------------------------------------- */
int * buildLCPArray(const char * txt, int n, int * suffixArr) {
  int * rank = malloc(n * sizeof(int));
  int * lcp = malloc(n * sizeof(int));

  // Compute rank array → rank[i] gives position of suffix i in suffixArr
  for (int i = 0; i < n; i++)
    rank[suffixArr[i]] = i;

  int k = 0; // length of current LCP
  for (int i = 0; i < n; i++) {
    if (rank[i] == n - 1) { // last suffix has no next neighbor
      k = 0;
      continue;
    }
    int j = suffixArr[rank[i] + 1]; // index of next suffix
    while (i + k < n && j + k < n && txt[i + k] == txt[j + k])
      k++;
    lcp[rank[i]] = k;
    if (k > 0) k--; // LCP for next suffix will be ≥ (k - 1)
  }

  free(rank);
  return lcp;
}

/* -------------------------------------------------------------------------
   FUNCTION: searchPattern
   PURPOSE : Uses binary search on suffix array to find a pattern.
   Returns : Starting index of pattern if found, else -1.
   Complexity: O(m log n)
   ------------------------------------------------------------------------- */
int searchPattern(const char * txt, int * suffixArr, int n,
  const char * pat) {
  int m = strlen(pat);
  int low = 0, high = n - 1;

  while (low <= high) {
    int mid = (low + high) / 2;
    int res = strncmp(pat, txt + suffixArr[mid], m);
    if (res == 0)
      return suffixArr[mid]; // match found
    if (res < 0)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return -1; // not found
}

/* -------------------------------------------------------------------------
   MAIN PROGRAM
   ------------------------------------------------------------------------- */
int main() {
  char txt[1000];
  printf("Enter text: ");
  scanf("%s", txt);

  int n = strlen(txt);

  // --- Step 1: Build Suffix Array ---
  int * suffixArr = buildSuffixArray(txt, n);

  // --- Step 2: Build LCP Array ---
  int * lcp = buildLCPArray(txt, n, suffixArr);

  // --- Display Suffix Array ---
  printf("\n--- Suffix Array ---\n");
  for (int i = 0; i < n; i++)
    printf("%2d : %s\n", suffixArr[i], txt + suffixArr[i]);

  // --- Display LCP Array ---
  printf("\n--- LCP Array ---\n");
  for (int i = 0; i < n - 1; i++)
    printf("lcp[%2d] = %d\n", i, lcp[i]);

  // --- Step 3: Pattern Search Demo ---
  char pat[100];
  printf("\nEnter pattern to search: ");
  scanf("%s", pat);

  int pos = searchPattern(txt, suffixArr, n, pat);
  if (pos != -1)
    printf("✅ Pattern found at index %d\n", pos);
  else
    printf("❌ Pattern not found\n");

  // Free allocated memory
  free(suffixArr);
  free(lcp);

  return 0;
}

/*
   -------------------------------------------------------------------------
   🧩 Example Run
   -------------------------------------------------------------------------
   Input:
       text = banana
       pattern = ana

   Output:
       --- Suffix Array ---
        5 : a
        3 : ana
        1 : anana
        0 : banana
        4 : na
        2 : nana

       --- LCP Array ---
       lcp[0] = 1
       lcp[1] = 3
       lcp[2] = 0
       lcp[3] = 0
       lcp[4] = 2

       ✅ Pattern found at index 1
   -------------------------------------------------------------------------
*/