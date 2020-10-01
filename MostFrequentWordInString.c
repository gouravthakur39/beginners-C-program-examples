#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Value of inputs in your array?" << endl;
    int arraysize;
    cin >> arraysize;
    
    cout << "Input array elements:" << endl;
    
    string array[arraysize];
    
    for(int i=0; i<arraysize; i++)
    {
        cin >> array[i];
    }
    
    int most_occur = 1; 
    
    for(int i=0; i<arraysize-1; i++)
    {
        int times_occur = 1;
        
        for(int j=i+1; j<arraysize; j++)
        {
            if(array[i]==array[j])
            times_occur = times_occur + 1;
        }
            
        if(times_occur>most_occur)
        {
            most_occur = times_occur;
        }
        
    }
    
    if(most_occur>1)
    {
        cout << "Most occuring: ";
        for(int i=0; i<arraysize-1; i++)
        {
            int times_occur = 1;
        
            for(int j=i+1; j<arraysize; j++)
            {
                if(array[i]==array[j])
                times_occur = times_occur + 1;
            }
            
            if(times_occur==most_occur)
            {
                cout << array[i] << " ";
            }
        }
    }
    
    else
    {
        cout << "No specific array elements are repeating.";
    }
    
    return 0;
