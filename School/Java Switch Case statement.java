class Solution {
    public:
      double switchCase(int choice, vector<double> &arr) {
          double pi = M_PI;
          switch(choice){
              case 1:
              return pi*arr[0]*arr[0];
              break;
              case 2:
              return arr[0]*arr[1];
              break;
          }
      }
  };