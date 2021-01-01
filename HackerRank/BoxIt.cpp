#include<bits/stdc++.h>

using namespace std;

class Box {
    private:
        int l,b,h;
    public:
    Box(){
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int a,int breadth,int c){
        l = a;
        b = breadth;
        h = c;
    }
    Box(const Box& B){
        l = B.l;
        b = B.b;
        h = B.h;
    }
    
    int getLength(){
        return l;
    } // Return box's length
    int getBreadth(){
        return b;
    } // Return box's breadth
    int getHeight(){
        return h;
    }  //Return box's height
    
    long long CalculateVolume(){
        return (long long)(b)*l*h;
    }
    
    friend bool operator < ( Box&A,Box& B){
        if( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)) ){
            return true;
        }else{
            return false;
        }
    };
    
    friend ostream& operator<< (ostream& output, const Box& B){
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }
};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
