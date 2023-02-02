// #include<iostream>
// using namespace std;


// int main() {

//     int a = 4;
//     int b = 6;

//     cout<<" a&b " << (a&b)<< endl;
//     cout<<" a|b " << (a|b) << endl;
//     cout<<" ~a " << ~a << endl;
//     cout<<" a^b " << (a^b) << endl;

//     cout<< (17>>1)<<endl;
//     cout<< (17>>2) <<endl;
//     cout<< (19<<1) <<endl;
//     cout<< (21<<2) <<endl;

//     int i = 7;

//     cout<< (++i) <<endl;
//     // 8 
//     cout<< (i++) <<endl;
//     // 8 , i = 9
//     cout<< (i--) <<endl;
//     //9 , i = 8 
//     cout<< (--i) <<endl; 
//     // 7, i =7
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
    
    
//    for(int a = 0 , b =1, c = 2; a>0 && b>1 && c>2; a--,b--, c-- ){
//        cout<<a <<" "<< b << " "<<c << endl;
//    }
//     return 0;
// }

// getoutput : 
// disire output

// #include<iostream>
// using namespace std;
// int main(){
//     string s = "hello";
//     char a = 2;
//     string s1 = s+a;
//     cout<<s1<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 0;
//     n = 800*800/800;
//     cout<<n<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
float AreaOfcircle(int r){
    float ans = 3.14*r*r;
    return ans;
}
float Areaoftriangle(int b, int h){
    float ans = (0.5)*b*h;
    return ans;
}
float Areaofrectangle(int b, int h){
    int ans = b*h;
    return ans;
}
int main(){
    int r = 2;
    int l = 4;
    int b = 3;
    AreaOfcircle(r);
    Areaoftriangle(l,b);
    cout<<"Area of circle is "<< AreaOfcircle(r)<<endl;;
    cout<<"Area of triangle is "<<Areaoftriangle(l,b)<<endl;
    cout<<"Area of rectangle is "<<Areaofrectangle(l,b)<<endl;
    return 0;
}