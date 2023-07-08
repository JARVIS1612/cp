#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
     int r = 5, c = 5;
     // 1.
     /*
          *****
          *****
          *****
          *****
          *****
     */
     // for(int i=0 ; i<r; i++)
     // {
     //      for(int j=0; j<c; j++)
     //      {
     //           cout << "*";
     //      }
     //      cout << "\n";
     // }

     //2.
     /*
          *
          **
          ***
          ****
          *****
     */
     // for(int i=0; i<r; i++)
     // {
     //      for(int j=0; j<=i; j++)
     //      {
     //           cout << "*";
     //      }
     //      cout << "\n";
     // }

     //3.
     /*
          1
          12
          123
          1234
          12345
     */
     // for(int i=0; i<r; i++)
     // {
     //      for(int j=0; j<=i; j++)
     //      {
     //           cout << j+1;
     //      }
     //      cout << "\n";
     // }

     //4.
     /*
          1
          22
          333
          4444
          55555
     */
     // for(int i=0; i<r; i++)
     // {
     //      for(int j=0; j<=i; j++)
     //      {
     //           cout << i+1;
     //      }
     //      cout << "\n";
     // }

     //5.
     /*
          *****
          ****
          ***
          **
          *  
     */
     // for(int i=r; i>0; i--)
     // {
     //      for(int j=1; j<=i; j++)
     //           cout << "*";
     //      cout << "\n";
     // }

     //6.
     /*
          12345
          1234
          123
          12
          1   
     */
     // for(int i=r; i>0; i--)
     // {
     //      for(int j=1; j<=i; j++)
     //           cout << j;
     //      cout << "\n";
     // }

     //7.
     /*
               *     
              ***    
             *****   
            *******  
           ********* 
     */
     // int last_row = 2*r - 1, c_row=0, start, end;

     // while(c_row<r)
     // {    
     //      start = last_row/2 - c_row;
     //      end = last_row/2 + c_row;
     //      for(int i=0; i<last_row; i++)
     //      {
     //           if(i>=start && i<=end)
     //                cout << "*";
     //           else
     //                cout << " ";
     //      }
     //      c_row ++;
     //      cout << "\n";
     // }

     //8.
     /*
           *********
            *******
             ***** 
              ***    
               *
     */
     // int last_row = 2*r - 1, c_row=r-1, start, end;

     // while(c_row>=0)
     // {    
     //      start = last_row/2 - c_row;
     //      end = last_row/2 + c_row;
     //      for(int i=0; i<last_row; i++)
     //      {
     //           if(i>=start && i<=end)
     //                cout << "*";
     //           else
     //                cout << " ";
     //      }
     //      c_row --;
     //      cout << "\n";
     // }

     //9.
     /*
               *
              ***
             ***** 
            *******
           *********
           *********
            *******
             ***** 
              ***    
               *
     */
     // int last_row = 2*r - 1, c_row=0, start, end;

     // while(c_row<r)
     // {    
     //      start = last_row/2 - c_row;
     //      end = last_row/2 + c_row;
     //      for(int i=0; i<last_row; i++)
     //      {
     //           if(i>=start && i<=end)
     //                cout << "*";
     //           else
     //                cout << " ";
     //      }
     //      c_row ++;
     //      cout << "\n";
     // }

     // c_row=r-1;

     // while(c_row>=0)
     // {    
     //      start = last_row/2 - c_row;
     //      end = last_row/2 + c_row;
     //      for(int i=0; i<last_row; i++)
     //      {
     //           if(i>=start && i<=end)
     //                cout << "*";
     //           else
     //                cout << " ";
     //      }
     //      c_row --;
     //      cout << "\n";
     // }

     //10.
     /*
          *
          **
          ***
          ****
          *****
          ****
          ***
          **
          *
     */
     // for(int i=0; i<r; i++)
     // {
     //      for(int j=0; j<=i; j++)
     //      {
     //           cout << "*";
     //      }
     //      cout << "\n";
     // }

     // for(int i=r-1; i>0; i--)
     // {
     //      for(int j=1; j<=i; j++)
     //           cout << "*";
     //      cout << "\n";
     // }

     //11.
     /*
          1
          01
          101
          0101
          10101
     */
     // for(int i=0; i<r; i++)
     // {
     //      for(int j=0; j<=i; j++)
     //           cout << ((i+j)%2==0) ? 1 : 0;

     //      cout << "\n";
     // }

     //12.
     /*
          1        1
          12      21
          123    321
          1234  4321
          1234554321
     */
     // int e1 = 0, s2 = r*2-1;
     // for (int i=0; i<r; i++)
     // {
     //      for(int j=0; j<r*2; j++)
     //      {
     //           if(j<=e1)
     //                cout << j+1;
     //           else if(j>=s2)
     //                cout << r*2 - j;
     //           else
     //                cout << " ";
     //      }
     //      e1 ++;
     //      s2 --;
     //      cout << "\n";
     // }    

     //13.
     /*
          1 
          2 3
          4 5 6
          7 8 9 10
          11 12 13 14 15
     */
     // int counter = 1;
     // for(int i=0; i<r; i++)
     // {
     //      for(int j=0; j<=i; j++)
     //      {
     //           cout << counter << " ";
     //           counter ++;
     //      }
     //      cout << "\n";
     // }

     //14.
     /*
          A 
          A B
          A B C
          A B C D
          A B C D E
     */
     // for(int i=0; i<r; i++)
     // {
     //      for(int j=0; j<=i; j++)
     //      {
     //           cout <<(char)(j+'A') << " ";
     //      }
     //      cout << "\n";
     // }
     
     //15.
     /*
          A B C D E 
          A B C D
          A B C
          A B
          A
     */
     // for(int i=0; i<r; i++)
     // {
     //      for(int j=r-1; j>=i; j--)
     //           cout << (char)(r-1 - j+'A') << " ";
     //      cout << "\n";
     // }

     //16.
     /*
          A 
          B B
          C C C
          D D D D
          E E E E E
     */
     // for(int i=0; i<r; i++)
     // {
     //      for(int j=0; j<=i; j++)
     //           cout << (char)(i+'A') << " ";
     //      cout << "\n";
     // }

     //17.
     /*
              A     
             ABA
            ABCBA
           ABCDCBA
          ABCDEDCBA
     */
     // int last_row = r*2 - 1, c_row=0, start, end;
     // char counter;
     // while(c_row<r)
     // {
     //      start = last_row/2 - c_row;
     //      end = last_row/2 + c_row;
     //      counter = 'A';
     //      for(int j=0; j<r*2; j++)
     //      {
     //           if(j>=start && j<=end)
     //           {
     //                if(j<last_row/2)
     //                     cout << counter++;
     //                else if(j==last_row/2) 
     //                     cout << counter;
     //                else
     //                     cout << --counter;
     //           }
     //           else
     //                cout << " ";
     //      }
     //      cout << "\n";
     //      c_row++;
     // }

     //18.
     /*
          E 
          D E
          C D E
          B C D E
          A B C D E
     */
     // char counter;
     // for(int i=0; i<r; i++)
     // {
     //      counter = 'A' - 1 + r - i;
     //      for(int j=0; j<=i; j++)
     //           cout << counter ++ << " ";

     //      cout << "\n";
     // }

     //19.
     /*
          **********
          ****  ****
          ***    ***
          **      **
          *        *
          *        *
          **      **
          ***    ***
          ****  ****
          **********
     */
     // int last_row = 2*r/*modification of 9.*/, c_row=0, start, end;
     // while(c_row<r)
     // {    
     //      start = last_row/2 - c_row;
     //      end = last_row/2 + c_row;
     //      for(int i=0; i<last_row; i++)
     //      {
     //           if(!(i>=start && i<end))//modification 9.
     //                cout << "*";
     //           else
     //                cout << " ";
     //      }
     //      c_row ++;
     //      cout << "\n";
     // }
     // c_row=r-1;
     // while(c_row>=0)
     // {    
     //      start = last_row/2 - c_row;
     //      end = last_row/2 + c_row;
     //      for(int i=0; i<last_row; i++)
     //      {
     //           if(!(i>=start && i<end)) // modification 9.
     //                cout << "*";
     //           else
     //                cout << " ";
     //      }
     //      c_row --;
     //      cout << "\n";
     // }

     //20.
     /*
          *        *
          **      **
          ***    ***
          ****  ****
          **********
          ****  ****
          ***    ***
          **      **
          *        *
     */
     // int e1 = 1, s2 = r*2-1, rows = r*2-1, c_row=0, switch_=0;
     // while(c_row<rows)
     // {    
     //      for(int j=0; j<r*2; j++)
     //      {
     //           if(j<e1 || j>=s2)
     //                cout << "*";
     //           else
     //                cout << " ";
     //      }
     //      cout << "\n";
     //      if(e1==s2)
     //           switch_ = 1;
     //      if(switch_==0)
     //      {
     //           e1++;
     //           s2--;
     //      }
     //      else
     //      {
     //           e1--;
     //           s2++;
     //      }
     //      c_row++;
     // }

     //21.
     /*
          *****
          *   *
          *   *
          *   *
          *****
     */
     // for(int i=0; i<r; i++)
     // {
     //      for(int j=0; j<r; j++)
     //      {
     //           if(i==0 || i==r-1 || j==0 || j==r-1)
     //                cout << "*";
     //           else 
     //                cout << " ";
     //      }
     //      cout << "\n";
     // }

     //22.
     /*
          1 1 1 1 1 1 1 1 1 
          1 2 2 2 2 2 2 2 1
          1 2 3 3 3 3 3 2 1
          1 2 3 4 4 4 3 2 1 
          1 2 3 4 5 4 3 2 1
          1 2 3 4 4 4 3 2 1
          1 2 3 3 3 3 3 2 1
          1 2 2 2 2 2 2 2 1
          1 1 1 1 1 1 1 1 1
     */
     // int n = r*2-1, i = 0, j = n-1, k = n - 1, l = 0, counter = 1;
     // int arr[n][n];

     // while(counter<=r)
     // {
     //      int temp;
     //      temp = i; //1
     //      while(temp<=j)
     //      {
     //           // cout << counter;
     //           arr[i][temp++] = counter;
     //      }
          
     //      temp = i; //1
     //      while(temp<=k)
     //      {
     //           // cout << counter;
     //           arr[temp++][j] = counter;
     //      }
          
     //      temp = k;
     //      while(temp>=l)
     //      {
     //           // cout << counter;
     //           arr[k][temp--] = counter;
     //      }
          
     //      temp = k;
     //      while(temp>=i)
     //      {
     //           // cout << k << " ";
     //           arr[temp--][l] = counter;
     //      }
     //      i++;
     //      j--;
     //      k--;
     //      l++;
     //      counter++;
     // }
     // for(int i=0; i<n; i++)
     // {
     //      for(int j=0; j<n; j++)
     //           cout << arr[i][j] << " ";
     //      cout << "\n";
     // }
     

     return 0;
}