#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int decryption(string y)
{

    string plaintext="";
	char ch;
	char arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char digit[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int a,num,b;
	int x,m,f,w;
	cout<<"****************************************************\n";
	cout<<"  please enter first key   :";
	cin>>a;
    cout<<"\n****************************************************\n";
    cout<<"  please enter second key  :";
    cin>>b;
	 
	 cout<<"\n****************************************************\n";
   cout<<"enter mod  :";
	cin>>m;
	x=a%m;
	int i=1,s;
	while(x>1)
	{
		s=(a*i);
		x=s%m;
	 
		if(x==1)
		break;
				++i;
	}
	int in=i;
    cout<<"\n****************************************************\n";
	cout<<"    MULTIPLICATIVE INVERSE Is  :"<<in<<endl;
    cout<<"****************************************************\n";
 
 
     //x=a inverce*(y-b) where y is positionn or location of cipher alphabet in set and b is second kay
     for(int i=0; i<y.length();i++)
     {
     	ch=y[i];
     	if(isalpha(ch))
     	{
     		if(isupper(ch))
     		{
     			for(int j=0;j<26;j++)
     			{
     				arr[j];
     				if(arr[j]==ch)
     				{ 
     					f=j;
     					break;
					}
				}
				w=(in*(f-b))%26;
				if(w>-26 && w<0)
				{
					w=26-(-w);
				}
				else if(w<-26)
				{
					w=w%26;
					w=(26-(-w));
				}
				
				plaintext+=arr[w];
			}
			if(islower(ch))
			{
					for(int j=0;j<26;j++)
     			{
     				digit[j];
     				if(digit[j]==ch)
     				{ 
     					f=j;
     					break;
					}
				}
				w=(in*(f-b))%26;
				if(w>-26 && w<0)
				{
					w=26-(-w);
					// cout<<" w  :"<<w;
				}
				else if(w<-26)
				{
					w=w%26;
					w=(26-(-w));
				}
				
				plaintext+=digit[w];
			}
	    }
		 
			else
			{
				plaintext+=ch;
			}
			
		
	}
    cout<<"****************************************************\n";
    cout<<"****************************************************\n";
	cout<<"    PLAINTEXT IS  :"<<plaintext;
    cout<<"\n****************************************************\n";
    cout<<"****************************************************\n";
      
}

int main()
{ 
    int choice,c,choose;
char yn;
   string p,pu,stp;
string name,u,stname,ciphertext;
    start:
     cout<<"====================================================\n";
    cout<<"         Please Select :\n    1.Sign Up\n    2.Log In\n";
     cout<<"====================================================\n";
    cin>>choice;
switch (choice)
{
    case 1:{
   cout<<"====================================================\n";
    cout<<"   Enter Your Full name   :";
    
   
     cin.ignore();
    getline(cin,name);
    cout<<"====================================================\n";
    cout<<"   Enter Your New password    :";
   
    getline(cin,p);
	cin.ignore();
    

    ofstream data("sample.txt");
    data<<name<<'\n';
    data<<p<<'\n';


    cout<<"\n====================================================\n";
    cout<<"        <<< Sign Up Successful >>>\n";
    cout<<"====================================================\n";
    
    cout<<"====================================================\n";
    cout<<"====================================================\n";
    cout<<"      - Want to go back press '1' -\n";
    
    cin>>c;
    

    
    if(c==1)
    {
        goto start;
    }
    else{
         cout<<"====================================================\n";
        cout<<"                Program terminated       ";
         cout<<"====================================================\n";
         cout<<"====================================================\n";
         
    }
       data.close();
break;
    }

   case 2:{
   cout<<"====================================================\n";
   cout<<"    Enter username : ";
   cin.ignore();
   getline(cin,u);
   
   
   cout<<"====================================================\n";
   cout<<"    Enter your password  : ";
   
   getline(cin,pu);
//    cout<<"\n====================================================\n";

   ifstream data("sample.txt");
//    cin.ignore();
   getline(data,name);
   

//    cout<<name<<endl;
//    cin.ignore();

   getline(data,p);


if(u==name && pu==p)
{
     cout<<"====================================================\n";
    cout<<"              Welcome Sir!          \n" ;
    cout<<"====================================================\n\n";
    cout<<"****************************************************\n";
    cout<<"    Please Select\n 1.Encryption\n 2.Decryption\n";
    cout<<"****************************************************\n";
    cin>>choose;
    switch(choose)
    {
        case 1:
        {
            int f,y,a,b;
	int k,j,i,word;
	char arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char digit[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
     ciphertext="";
//  int	y=ax+b;
 
string x;
 cout<<"****************************************************\n";
cout<<"   please enter plaintext    :: ";
 
 cin.ignore();
 getline(cin ,x);
  cout<<"\n****************************************************\n";
 cout<<"   please enter first key:: ";
  
 cin>>a;
 if(a %2==0 || a %13==0)
 {
 	  cout<<"*********************************************************\n";
 	cout<<"your key is not coprime with 26 please try again   : \n";
     cout<<"********************************************************\n";
  
  exit(0);
 }
cout<<"\n****************************************************\n";
 cout<<"  please enter second key : ";
  
 cin>>b;
 for(int k=0;k<x.length();k++)
 {
   char ch=x[k];
  	
  	 if(isalpha(ch))
  	 
  	 {
  	 	if(isupper(ch))
  	 	{
		   
  	 	for(i=0;i<26;i++)
  	 	{
  	 	   arr[i];
			 if(ch==arr[i])
			 {
			 	f=i;
	
			 	break;
			}	
		 }
		  	y=(a*f+b)%26;
//		  	cout<<"y   "<<y<<"   :";
		 ciphertext+=arr[y];
		 }
		 
		 else if(islower(ch))
		 {
		 		for(i=0;i<26;i++)
  	 	{
  	 	   digit[i];
			 if(ch==digit[i])
			 {
			 	f=i;
	
			 	break;
			}	
		 }
		  	y=(a*f+b)%26;
//		  	cout<<"y   "<<y<<"   :";
		 ciphertext+=digit[y];
		 }
		 
	 }
	 else if(isdigit(ch)){
	 
	  
	 ciphertext+= ch;
	 
}
		  
	  else
	     ciphertext+=ch;
	
	 continue;
 
}
    cout<<"*******************************************************************";
	cout<<"\n-----------------------------------------------------------------\n";
     cout<<"CIPHER TEXT    : "<<ciphertext;
	cout<<"\n-----------------------------------------------------------------\n";
    cout<<"*******************************************************************\n\n";
   
    cout<<"DO you want to Decrypt the same text?\n  (y)\n  (n)\n";
    cin>>yn;
    if(yn=='y')
{
    decryption(ciphertext); 

}  
else{
    cout<<"*******************************************************************\n";
    cout<<"           Program terminated \n";
    cout<<"*******************************************************************\n";
}
		


break;
        }

       case 2:
        {
            string ctext;
            cout<<"*******************************************************************\n";
            cout<<"         Enter your Cipher text :  ";
            
            cin.ignore();
            getline(cin,ctext);
           decryption(ctext); 
           break;
        }

    }

}
else
{
    cout<<"*******************************************************************\n";
    cout<<"       Invalid Username Or Password\n";
    cout<<"*******************************************************************\n";
}
    data.close();

// else{
// 	cout<<"Error in program";
// }
// default:
    break;
   }
}
return 0;
}