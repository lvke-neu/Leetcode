#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<deque>
#include<math.h>
using namespace std;
string addBinary(string a, string b)
{
    if(a.size()==b.size())
    {
        int index_a=a.size()-1;
        int index_b=b.size()-1;
        int carry=0;
        string outcome;
        int bitsum=0;
        while(index_a>=0)
        {
            bitsum+=(int)(a[index_a]-'0')+(int)(b[index_b]-'0')+carry;

            if(bitsum<2)
            {
                outcome+=char((bitsum-0)+'0');

                carry=0;
            }
            else if(bitsum==2)
            {
                outcome+='0';
                carry=1;
            }else
            {
                outcome+='1';
                carry=1;
            }
            index_a--;
            index_b--;
            bitsum=0;
        }
        if(carry==0)
        {
            string temp_outcome;
            for(int i=outcome.size()-1;i>=0;i--)
                temp_outcome+=outcome[i];
            return temp_outcome;
        }

        else
        {

            outcome+='1';
            string temp_outcome;
            for(int i=outcome.size()-1;i>=0;i--)
                temp_outcome+=outcome[i];
            return temp_outcome;
        }

    }
    else if(a.size()>b.size())
    {
        int index_a=a.size()-1;
        int index_b=b.size()-1;
        int carry=0;
        string outcome;
        int bitsum=0;
        while(index_b>=0)
        {
            bitsum+=(int)(a[index_a]-'0')+(int)(b[index_b]-'0')+carry;

            if(bitsum<2)
            {
                outcome+=char((bitsum-0)+'0');

                carry=0;
            }
            else if(bitsum==2)
            {
                outcome+='0';
                carry=1;
            }else
            {
                outcome+='1';
                carry=1;
            }
            index_a--;
            index_b--;
            bitsum=0;
        }
        while(index_a>=0)
        {
            bitsum+=(int)(a[index_a]-'0')+carry;
            if(bitsum<2)
            {
                outcome+=char((bitsum-0)+'0');

                carry=0;
            }
            else if(bitsum==2)
            {
                outcome+='0';
                carry=1;
            }else
            {
                outcome+='1';
                carry=1;
            }
            index_a--;

            bitsum=0;

        }
        if(carry==0)
        {
            string temp_outcome;
            for(int i=outcome.size()-1;i>=0;i--)
                temp_outcome+=outcome[i];
            return temp_outcome;
        }

        else
        {

            outcome+='1';
            string temp_outcome;
            for(int i=outcome.size()-1;i>=0;i--)
                temp_outcome+=outcome[i];
            return temp_outcome;
        }
    }
    else
    {
        int index_a=a.size()-1;
        int index_b=b.size()-1;
        int carry=0;
        string outcome;
        int bitsum=0;
        while(index_a>=0)
        {
            bitsum+=(int)(a[index_a]-'0')+(int)(b[index_b]-'0')+carry;

            if(bitsum<2)
            {
                outcome+=char((bitsum-0)+'0');

                carry=0;
            }
            else if(bitsum==2)
            {
                outcome+='0';
                carry=1;
            }else
            {
                outcome+='1';
                carry=1;
            }
            index_a--;
            index_b--;
            bitsum=0;
        }
        while(index_b>=0)
        {
            bitsum+=(int)(b[index_b]-'0')+carry;
            if(bitsum<2)
            {
                outcome+=char((bitsum-0)+'0');

                carry=0;
            }
            else if(bitsum==2)
            {
                outcome+='0';
                carry=1;
            }else
            {
                outcome+='1';
                carry=1;
            }
            index_b--;

            bitsum=0;

        }
        if(carry==0)
        {
            string temp_outcome;
            for(int i=outcome.size()-1;i>=0;i--)
                temp_outcome+=outcome[i];
            return temp_outcome;
        }

        else
        {

            outcome+='1';
            string temp_outcome;
            for(int i=outcome.size()-1;i>=0;i--)
                temp_outcome+=outcome[i];
            return temp_outcome;
        }
    }
}
int main()
{

   string a="1";
   string b="111";
   string outcome=addBinary(a,b);

    cout<<outcome<<endl;

    return 0;
}
