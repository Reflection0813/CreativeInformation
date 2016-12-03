#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <math.h>
#include <set>
using namespace std;
#define rep(i,n) for(int i = 0; i < n ; i++)
#define pb push_back


int string_to_int(std::string str){
  int ret;
  std::stringstream ss;
  ss << str;
  ss >> ret;
  return ret;
}

void fileReader(string filename,vector<string> &vec){

  ifstream ifs(filename);
  string str; int cnt = 0;
  while(getline(ifs,str)){
    cout <<  cnt << " " << str <<endl;
    vec.push_back(str);
    cnt += 1;
  }
}



int main() {
  string filename = "program.txt"; vector<string> txt;
  fileReader(filename,txt);

  return 0;
}
