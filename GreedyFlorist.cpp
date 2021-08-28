//Title:- Greedy Florist
//coder:- Pavan Chavan
//Email:- pavan.21920161@viit.ac.in
//date:- 28/8/2021

/* A group of friends want to buy a bouquet of flowers. 
The florist wants to maximize his number of new customers 
and the money he makes. To do this, he decides he'll multiply 
the price of each flower by the number of that customer's previously 
purchased flowers plus . The first flower will be original price, ,
 the next will be  and so on.

Given the size of the group of friends, the number of flowers they want 
to purchase and the original prices of the flowers, determine the minimum 
cost to purchase all of the flowers. The number of flowers they want equals 
the length of the  array. */

#include <cstdio>
#include <algorithm>
using namespace std;

int a[102];

int main() {
int i,j,m,n;
long long c,ans=0;
    scanf("%d%d",&n,&m);
    for (i=0;i<n;++i) {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for (i=n-1,c=0,j=0;i>=0;--i) {
        if (j==0) {
            ++c;
        }
        ans+=c*a[i];
        if (++j==m) {
            j=0;
        }
    }
    printf("%Ld\n",ans);
    return 0;
}
