#include<bits/stdc++.h>
using namespace std;
int poselcounter(int arr[], int n)
{
    int poscount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            poscount++;
        }
    }
    return poscount;
}
bool seminegcheck(int arr[], int n)
{
    int index;
    int greatest = arr[0];
    for (int i = 1; i <= n; i++)
    {
        if (greatest < arr[i])
        {
            greatest = arr[i];
            index = i;
        }
    }
    if (greatest <= 0)
    {
        cout << "\nThe array is seminegative, largest element being: " << greatest;
        return true;
    }
    else
    {
        return false;
    }
}
void subarrayfinder(int arr[], int n)
{
    int count = poselcounter(arr, n);
    int inarray[count];
    int l = 0;
    int start;
    int end;
    int sum = 0;
    int greatestsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            inarray[l] = i;
            l++;
        }
    }
    for (int m = 0; m < count; m++)
    {
        for (int n = m; n < count; n++)
        {
            for (int o = inarray[m]; o <= inarray[n]; o++)
            {
                sum = sum + arr[o];
            }
            if (sum >= greatestsum)
                {
                greatestsum = sum;
                start = inarray[m];
                end = inarray[n];
                }
            sum = 0;
        }
    }
    cout << "\n The largest sub-array sum obtained is: " << greatestsum;
    cout << "\n The beginning and ending indices are " << start << " " << end << " respectively.";
    cout << "\n The array is: ";
    for(int z = start ; z <= end ; z++)
    {
        cout << arr[z] << " ";
    }
}
int main()
{
    static int index;
    int n;
    int arr[n];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"\n Entered array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    if (seminegcheck(arr, n))
    {
        return 0;
    }
    else
    {
        subarrayfinder(arr, n);
    }
}