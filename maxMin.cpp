//Title:- MinMax
//coder:- Pavan Chavan
//Email:- pavan.21920161@viit.ac.in
//date:- 10/8/2021


/*
You will be given a list of integers, , and a single integer .
You must create an array of length  from elements of  such that
its unfairness is minimized. Call that array . Unfairness of an
array is calculated as
*/

/*
 * Complete the 'maxMin' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY arr
 */

int maxMin(int k, vector<int> arr) {
        int unfair=INT16_MAX,min,minPos;
        int temp;
        for (int i=0; i<arr.size(); i++) 
        {
            for (int j=0; j<arr.size(); j++) 
            {
                if (arr[i]<arr[j]) {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }            
        }       
        for(int i=0,j=k-1;i<arr.size();i++,j++)
        {
                temp=arr[j]-arr[i];
                if(temp<0)temp=-temp;
                if (unfair>(temp)) 
                {
                    unfair=temp;
                    //cout<<unfair<<endl;
                }
                if(j==arr.size()-1)
                j=-1;
            
        }
        return unfair;
}