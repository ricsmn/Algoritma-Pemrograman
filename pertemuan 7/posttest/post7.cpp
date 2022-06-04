#include <iostream>
#include <string>

using namespace std;
void bubbleSort(
    int jumlahdata,
    int data[])
{
   int indexout;
   int sementara;
   int i;
   int j;
   data[10];

   cout << " SUBPROGRAM " << endl;
   cout << "data awal :  " << endl;
   indexout = 1;
   while (!(indexout > jumlahdata))
   {
      cout << data[indexout] << "  ";
      indexout = indexout + 1;
   }
   cout << "  " << endl;
   i = 1;
   while (!(i > jumlahdata))
   {
      j = jumlahdata;
      while (!(j < i + 1))
      {
         if (data[j] < data[j - 1])
         {
            sementara = data[j];
            data[j] = data[j - 1];
            data[j - 1] = sementara;
         }
         else
         {
         }
         j = j - 1;
      }
      cout << "bubble-" << i << endl;
      indexout = 1;
      while (!(indexout > jumlahdata))
      {
         cout << data[indexout] << "  ";
         indexout = indexout + 1;
      }
      cout << " " << endl;
      i = i + 1;
   }
}
int main()
{
   int indexout;
   int sementara;
   int i;
   int j;
   int jumlahdata;
   int data[10];

   data[1] = 9;
   data[2] = 2;
   data[3] = 1;
   data[4] = 4;
   data[5] = 11;
   data[6] = 10;
   data[7] = 18;
   data[8] = 6;
   jumlahdata = 8;

   bubbleSort(jumlahdata, data);

   cout << " TANPA SUBPROGRAM " << endl;
   cout << "data awal :  " << endl;
   indexout = 1;
   while (!(indexout > jumlahdata))
   {
      cout << data[indexout] << "  ";
      indexout = indexout + 1;
   }
   cout << "  " << endl;
   i = 1;
   while (!(i > jumlahdata))
   {
      j = jumlahdata;
      while (!(j < i + 1))
      {
         if (data[j] < data[j - 1])
         {
            sementara = data[j];
            data[j] = data[j - 1];
            data[j - 1] = sementara;
         }
         else
         {
         }
         j = j - 1;
      }
      cout << "bubble-" << i << endl;
      indexout = 1;
      while (!(indexout > jumlahdata))
      {
         cout << data[indexout] << "  ";
         indexout = indexout + 1;
      }
      cout << " " << endl;
      i = i + 1;
   }

   return 0;
}
