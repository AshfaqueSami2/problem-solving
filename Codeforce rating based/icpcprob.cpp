#include <iostream> 
#include <string.h> 
using namespace std; 
int main() 
{ 
    int t; 
    scanf("%d ",&t); 
    while (t--) 
    { 
        double over = 0.0; 
        int run = 0; 
        int wicket = 0; 
        char ball[60]; 
        gets(ball); 
        int balls = strlen(ball); 
        for(int i=0;i<strlen(ball);i++) 
        { 
           if(ball[i] == 'W') 
           { 
            wicket++; 

           } 
           else 
           { 
            run += ball[i] - '0'; 
           } 
 
        } 
         
        int mod=balls%6; 
        int result=balls/6; 
        if(balls<=6 && run<2 && wicket<2) // over run wicket
        {
           cout<<result<<"."<<mod<<" Over ";
           cout<<run<<" Run "<<wicket<<" Wicket."<<endl;  
        }
        else if (balls<=6 && run<2 && wicket>1) // over run wickets
        {
           cout<<result<<"."<<mod<<" Over ";
           cout<<run<<" Run "<<wicket<<" Wickets."<<endl;  
        }
        else if(balls>6 && run<2 && wicket>1) //overs run wickets
        {
            cout<<result<<"."<<mod<<" Overs ";
           cout<<run<<" Run "<<wicket<<" Wickets."<<endl;  
        }
        else if(balls>6 && run>1 && wicket>1) //overs runs wickets
        {
           cout<<result<<"."<<mod<<" Overs ";
           cout<<run<<" Runs "<<wicket<<" Wickets."<<endl; 
        }
        else if(balls>6 && run<2 && wicket<2) // overs run wicket
        {
            cout<<result<<"."<<mod<<" Overs ";
           cout<<run<<" Run "<<wicket<<" Wicket."<<endl; 
        }
        else if(balls<=6 && run>1 && wicket<2) //over runs wicket
        {
         cout<<result<<"."<<mod<<" Over ";
           cout<<run<<" Runs "<<wicket<<" Wicket."<<endl;    
        }
        else if(balls>6 && run>1 && wicket<2) //overs runs wicket
        {
           cout<<result<<"."<<mod<<" Overs ";
           cout<<run<<" Runs "<<wicket<<" Wicket."<<endl;   
        }
        else if(balls<=6 && run>1 && wicket>1) //over runs wickets
        {
           cout<<result<<"."<<mod<<" Over ";
           cout<<run<<" Runs "<<wicket<<" Wickets."<<endl;   
        }
    } 
 
    return 0; 
}
