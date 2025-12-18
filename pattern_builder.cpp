#include <iostream>
using namespace std;

/* -------- STAR PATTERNS -------- */

void starTriangle(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
}

void invertedStar(int n)
{
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
}

void pyramidStar(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int s=1;s<=n-i;s++)
            cout<<"  ";
        for(int j=1;j<=2*i-1;j++)
            cout<<"* ";
        cout<<endl;
    }
}

void diamondStar(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int s=1;s<=n-i;s++)
            cout<<"  ";
        for(int j=1;j<=2*i-1;j++)
            cout<<"* ";
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int s=1;s<=n-i;s++)
            cout<<"  ";
        for(int j=1;j<=2*i-1;j++)
            cout<<"* ";
        cout<<endl;
    }
}

void hollowSquare(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}

/* -------- NUMBER PATTERNS -------- */

void numberTriangle(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
}

void sameNumberTriangle(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<i<<" ";
        cout<<endl;
    }
}

void floydTriangle(int n)
{
    int num=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<num++<<" ";
        cout<<endl;
    }
}

void invertedNumberTriangle(int n)
{
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
}

/* -------- ALPHABET PATTERNS -------- */

void alphabetTriangle(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
            cout<<char('A'+j)<<" ";
        cout<<endl;
    }
}

void sameAlphabetTriangle(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<char('A'+i)<<" ";
        cout<<endl;
    }
}

void continuousAlphabet(int n)
{
    char ch='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

void reverseAlphabetTriangle(int n)
{
    for(int i=n;i>=1;i--)
    {
        for(int j=0;j<i;j++)
            cout<<char('A'+j)<<" ";
        cout<<endl;
    }
}

/* -------- MAIN -------- */

int main()
{
    int choice, rows;

    do
    {
        cout<<"\n===== PATTERN BUILDER APP =====\n";
        cout<<"1. Star Patterns\n";
        cout<<"2. Number Patterns\n";
        cout<<"3. Alphabet Patterns\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
        {
            int c;
            cout<<"\nStar Patterns\n";
            cout<<"1. Triangle\n2. Inverted\n3. Pyramid\n4. Diamond\n5. Hollow Square\n";
            cin>>c;
            cout<<"Rows: ";
            cin>>rows;

            if(c==1) starTriangle(rows);
            else if(c==2) invertedStar(rows);
            else if(c==3) pyramidStar(rows);
            else if(c==4) diamondStar(rows);
            else if(c==5) hollowSquare(rows);
            else cout<<"Invalid choice\n";
            break;
        }

        case 2:
        {
            int c;
            cout<<"\nNumber Patterns\n";
            cout<<"1. Number Triangle\n2. Same Number\n3. Floyd\n4. Inverted\n";
            cin>>c;
            cout<<"Rows: ";
            cin>>rows;

            if(c==1) numberTriangle(rows);
            else if(c==2) sameNumberTriangle(rows);
            else if(c==3) floydTriangle(rows);
            else if(c==4) invertedNumberTriangle(rows);
            else cout<<"Invalid choice\n";
            break;
        }

        case 3:
        {
            int c;
            cout<<"\nAlphabet Patterns\n";
            cout<<"1. Alphabet Triangle\n2. Same Alphabet\n3. Continuous Alphabet\n4. Reverse Alphabet\n";
            cin>>c;
            cout<<"Rows: ";
            cin>>rows;

            if(c==1) alphabetTriangle(rows);
            else if(c==2) sameAlphabetTriangle(rows);
            else if(c==3) continuousAlphabet(rows);
            else if(c==4) reverseAlphabetTriangle(rows);
            else cout<<"Invalid choice\n";
            break;
        }

        case 4:
            cout<<"Thank you! Exiting...\n";
            break;

        default:
            cout<<"Invalid input\n";
        }

    } while(choice!=4);

    return 0;
}

