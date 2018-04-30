#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (true)
    {
        bool isOpen=true;
        int version;
        cout<<"0. Affine Cipher \n1. Caesar Cipher \n2. Atbash Cipher \n3. ROT13 Cipher \n4. Baconian Cipher ";
        cout<<"\n5. Simple Substitution Cipher. \n6. Polybius Square Cipher \n7. Morse Code \n8. XOR Cipher \n9. Rail-fence Cipher ";
        cout<<"\nchoose from 0 to 9 : ";
        cin>> version;
        while ((version<0)||(version>9))
        {
            cout<<"wrong number please select number from 0 to 9 : "<<endl;
            cin>> version;
        }
        if(version==0)
        {
            cout<<"Ahlan ya user ya habibi.\nWhat do you like to do today? \n1- Cipher a message \n2- Decipher a message \n3- End \n>> ";
            string q;
            while (isOpen)
            {
                cin>>q;
                if (q=="1"||q=="2"||q=="3")
                    isOpen=false;
                else
                    cout<<"choose from 1 or 2 or 3 \n>>";
            }
            cout<<"please enter your massage: ";
            string x;
            cin.ignore();
            getline(cin, x);
            int z,c,y;
            cout<<"please enter parameters ";
            int a,b,m;
            cout<<"your first and second input should be like that(a*c)%26=1: ";
            cin>>a>>m>>b;
            while ((a*m)%26!=1)
            {
                cout<<"please enter parameters again: ";
                cin>>a>>b>>m;
            }
            if (q=="1")
            {
                for (int i=0; i<x.length(); i++)
                {
                    z=x[i];
                    if (z>=97)
                    {
                        z = x[i]-97;
                        c=(((a*z)+b)%26);
                        cout<<char(c+97);
                    }
                    if(z>=65)
                    {
                        z = x[i]-65;
                        c=((a*z)+b)%26;
                        cout<<char(c+65);
                    }

                    if (z ==32)
                    {
                        cout<<char(32);
                    }
                }
            }
            if (q=="2")
            {
                for (int i=0; i<x.length(); i++)
                {
                    z=x[i];
                    if (z>=97)
                    {

                        z = x[i]-97;
                        c=(m*(z-b));
                        y=fmod(c,26);
                        if (y<0)
                        {
                            y=y+26;
                        }
                        cout<<char(y+97);
                    }
                    if(z>=65)
                    {
                        z = x[i]-65;
                        c=(m*(z-b));
                        y=fmod(c,26);
                        if (y<0)
                        {
                            y=y+26;
                        }
                        cout<<char(y+65);
                    }

                    if (z ==32)
                    {
                        cout<<char(32);
                    }
                }
            }
            cout<<endl;
        }
        if (version==1)
        {
            string x,q;
            vector<char>y;
            cout<<"Ahlan ya user ya habibi.\nWhat do you like to do today? \n1- Cipher a message \n2- Decipher a message \n3- End \n>> ";
            while (isOpen)
            {
                cin>>q;
                if (q=="1"||q=="2"||q=="3")
                    isOpen=false;
                else
                    cout<<"choose from 1 or 2 or 3 \n>>";
            }
            if(q!="3"){
            int shift,temp_shift;
            cout << "enter your shift num";
            cin>>temp_shift;
            string b="";
            shift=26-temp_shift;
            char a[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
                        'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
            for (int i=0;i<26;i++){
                b += a[shift];
                shift++;
                if (shift == 26){
                    shift =0;
                }
            }
            shift=52-temp_shift;
            for (int i=0;i<26;i++){
                b += a[shift];
                shift++;
                if (shift == 52){
                    shift =26;
                }
            }
            cout<<"Enter the massage : ";
            cin.ignore();
            getline(cin,x);
            if (q == "1")
            {
                for(int i=0; i<x.size(); i++)
                {
                    for(int j=0; j<52; j++)
                    {
                        if (x[i]==a[j])
                        {
                            y.push_back(b[j]);
                            break;
                        }
                    }
                    if (i!=(y.size())-1)
                    {
                        y.push_back(x[i]);
                    }
                }
                cout<<"the cipher massage is : ";
                for(int i=0; i<x.size(); i++)
                {
                    cout<<y[i];
                }
            }
            else
            {
                for(int i=0; i<x.size(); i++)
                {
                    for(int j=0; j<52; j++)
                    {
                        if (x[i]==b[j])
                        {
                            y.push_back(a[j]);
                            break;
                        }
                    }
                    if (i!=(y.size())-1)
                    {
                        y.push_back(x[i]);
                    }
                }
                cout<<"the decipher massage is : ";
                for(int i=0; i<x.size(); i++)
                {
                    cout<<y[i];
                }
            }}

        }
        if (version==2)
        {
            char a[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
                       'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'
                      };
            char b[]= {'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a',
                       'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'
                      };
            string x,q;
            vector<char>y;
            cout<<"Ahlan ya user ya habibi.\nWhat do you like to do today? \n1- Cipher a message \n2- Decipher a message \n3- End \n>> ";
            while (isOpen)
            {
                cin>>q;
                if (q=="1"||q=="2"||q=="3")
                    isOpen=false;
                else
                    cout<<"choose from 1 or 2 or 3 \n>>";
            }
            if(q!="3")
            {
                cout<<"Enter the massage : ";
                cin.ignore();
                getline(cin,x);
                if (q == "1")
                {
                    for(int i=0; i<x.size(); i++)
                    {
                        for(int j=0; j<52; j++)
                        {
                            if (x[i]==a[j])
                            {
                                y.push_back(b[j]);
                                break;
                            }
                        }
                        if (i!=(y.size())-1)
                        {
                            y.push_back(x[i]);
                        }
                    }
                    cout<<"the cipher massage is : ";
                    for(int i=0; i<x.size(); i++)
                    {
                        cout<<y[i];
                    }
                }
                else
                {
                    for(int i=0; i<x.size(); i++)
                    {
                        for(int j=0; j<52; j++)
                        {
                            if (x[i]==b[j])
                            {
                                y.push_back(a[j]);
                                break;
                            }
                        }
                        if (i!=(y.size())-1)
                        {
                            y.push_back(x[i]);
                        }
                    }
                    cout<<"the decipher massage is : ";
                    for(int i=0; i<x.size(); i++)
                    {
                        cout<<y[i];
                    }
                }
            }
        }
        if(version==3)
        {
            char a[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
                       'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'
                      };
            char b[]= {'n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m',
                       'N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M'
                      };
            string x,q;
            bool s=true;
            vector<char>y;
            cout<<"Ahlan ya user ya habibi.\nWhat do you like to do today? \n1- Cipher a message \n2- Decipher a message \n3- End \n>> ";
            while (isOpen)
            {
                cin>>q;
                if (q=="1"||q=="2"||q=="3")
                    isOpen=false;
                else
                    cout<<"choose from 1 or 2 or 3 \n>>";
            }
            if (q!="3")
            {
                cout<<"Enter the massage : ";
                cin.ignore();
                getline(cin,x);
                if (q == "1")
                {
                    for(int i=0; i<x.size(); i++)
                    {
                        for(int j=0; j<56; j++)
                        {
                            if (x[i]==a[j])
                            {
                                y.push_back(b[j]);
                                break;
                            }
                        }
                        if (i!=(y.size())-1)
                        {
                            y.push_back(x[i]);
                        }
                    }
                    cout<<"the cipher massage is : ";
                    for(int i=0; i<x.size(); i++)
                    {
                        cout<<y[i];
                    }
                }
                else if (q=="2")
                {
                    for(int i=0; i<x.size(); i++)
                    {
                        for(int j=0; j<56; j++)
                        {
                            if (x[i]==b[j])
                            {
                                y.push_back(a[j]);
                                break;
                            }
                        }
                        if (i!=(y.size())-1)
                        {
                            y.push_back(x[i]);
                        }
                    }
                    cout<<"the decipher massage is : ";
                    for(int i=0; i<x.size(); i++)
                    {
                        cout<<y[i];
                    }
                }
            }
        }
        if (version==4)
        {
            cout<<"Ahlan ya user ya habibi.\nWhat do you like to do today? \n1- Cipher a message \n2- Decipher a message \n3- End \n>> ";
            string q;
            while (isOpen)
            {
                cin>>q;
                if (q=="1"||q=="2"||q=="3")
                    isOpen=false;
                else
                    cout<<"choose from 1 or 2 or 3 \n>>";
            }
            string massageAfterThePrograme ="";
            string capitalLetters ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            string smallLetters="abcdefghijklmnopqrstuvwxyz ";
            string cipher[28]= {"aaaaa","aaaab","aaaba","aaabb","aabaa","aabab","aabba","aabbb","abaaa","abaab","ababa","ababb","abbaa","abbab","abbba","abbbb","baaaa","baaab","baaba","baabb","babaa","babab","babba","babbb","bbaaa","bbaab"," "};

            if (q=="1")
            {
                cout<<"please enter the massage you want to cipher"<<endl;
                string massageBeforeCipher;
                cin.ignore();
                getline(cin,massageBeforeCipher);
                for(unsigned int m=0; m<=massageBeforeCipher.size(); m++)
                {
                    for(int i=0; i<=25; i++)
                    {
                        if (massageBeforeCipher[m]==capitalLetters[i])
                        {
                            massageBeforeCipher[m]=smallLetters[i];
                        }
                    }

                }
                for (unsigned int i=0; i<=(massageBeforeCipher.size()-1); i++)
                {
                    for (int j=0; j<=27; j++)
                    {
                        if (massageBeforeCipher[i]==smallLetters[j])
                        {
                            massageAfterThePrograme=massageAfterThePrograme+cipher[j];
                        }

                    }
                }

                cout<<"massage before cipher : "<<endl;
                cout<<massageBeforeCipher<<endl;
                cout<<"massage after cipher  :"<<endl;
                cout<<massageAfterThePrograme<<endl;


            }
            else if (q=="2")
            {
                string massageBeforeDecipher;
                string charInQuestion;
                string test;
                cout<<"enter the massage you want to decipher :"<<endl;

                cin.ignore();
                getline(cin,massageBeforeDecipher);
                test=massageBeforeDecipher;
                for (unsigned int i =0; i<=massageBeforeDecipher.size(); i=i+5)
                {
                    if(test[0]==' ')
                    {
                        test.erase(0,1);
                        massageAfterThePrograme=massageAfterThePrograme+" ";
                    }
                    charInQuestion=test.substr(0,5);
                    for(int j=0; j<=27; j++)
                    {
                        if(charInQuestion==cipher[j])
                        {
                            massageAfterThePrograme=massageAfterThePrograme+smallLetters[j];
                            test.erase(0,5);
                        }
                    }
                }

                cout<<"massage before decipher : "<<massageBeforeDecipher<<endl;
                cout<<"massage after decipher  : "<<massageAfterThePrograme;
            }
        }
        if (version==5)
        {
            string x,z,q;
            bool isOpen=true;
            cout<<"Ahlan ya user ya habibi.\nWhat do you like to do today? \n1- Cipher a message \n2- Decipher a message \n3- End \n>> ";
            while (isOpen)
            {
                cin>>z;
                if (z=="1"||z=="2"||z=="3")
                    isOpen=false;
                else
                    cout<<"choose from 1 or 2 or 3 \n";
            }
            if (z!="3")
            {
                vector<char>y;
                char a[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
                deque<char> b(a,a+26);
                char tkey[5],key[5];
                cout<<"Enter the key : ";
                cin>>tkey;
                for (int i=0; i<5; i++)
                {
                    key[i] = tolower(tkey[i]);
                }
                for(int i=0; i<5; i++)
                {
                    b.erase(remove(b.begin(), b.end(), key[i]), b.end());
                }
                for (int i=4; i>=0; i--)
                {
                    b.push_front(key[i]);
                }
                cout<<"Enter the massage : ";
                cin.ignore();
                getline(cin,q);
                for (int i=0; i<q.size(); i++)
                {
                    x += tolower(q[i]);
                }
                if (z=="1")
                {
                    for(int i=0; i<x.size(); i++)
                    {
                        for(int j=0; j<26; j++)
                        {
                            if (x[i]==a[j]||x[i]=='a')
                            {
                                y.push_back(b[j]);
                                break;
                            }
                        }
                        if (i!=(y.size())-1)
                        {
                            y.push_back(x[i]);
                        }
                    }
                    cout<<"the cipher massage is : ";
                    for(int i=0; i<y.size(); i++)
                    {
                        cout<<y[i];
                    }
                }
                else
                {
                    for(int i=0; i<x.size(); i++)
                    {
                        for(int j=0; j<26; j++)
                        {
                            if (x[i]==b[j])
                            {
                                if(x[i]!=key[0])
                                {
                                    y.push_back(a[j]);
                                    break;
                                }
                                else
                                {
                                    y.push_back('a');
                                    break;
                                }
                            }
                        }
                        if (i!=(y.size())-1)
                        {
                            y.push_back(x[i]);
                        }
                    }
                    cout<<"the decipher massage is : ";
                    for(int i=0; i<y.size(); i++)
                    {
                        cout<<y[i];
                    }
                }
            }



        }



        if (version==6)
        {
            string msg,x,q;
            int key;
            vector<int> v;
            cout<<"Ahlan ya user ya habibi.\nWhat do you like to do today? \n1- Cipher a message \n2- Decipher a message \n3- End \n>> ";
            while (isOpen)
            {
                cin>>q;
                if (q=="1"||q=="2"||q=="3")
                    isOpen=false;
                else
                    cout<<"choose from 1 or 2 or 3 \n>>";
            }
            if(q=="1")
            {
            string msg;
            char a,matrix[6][6]={{' ',' ',' ',' ',' ',' '},{' ','a','b','c','d','e'},{' ','f','g','h','i','j'},
                                {' ','k','l','m','n','o'},{' ','p','q','r','s','t'},{' ','u','v','x','y','z'}};
            cout << "Enter the key you want to cipher :";
            for (int i=0;i<5;i++){
                cin>>a;
                matrix[0][i+1]=a;
                matrix[i+1][0]=a;
            }
            cout<<"Enter the massage : ";
            cin.ignore();
            getline(cin,msg);
            for(int i=0;i<msg.length();i++){
                for (int j=0;j<6;j++){
                    for (int k=0;k<6;k++){
                        if (matrix[j][k]==msg[i]){
                            cout<<matrix[0][j]<<matrix[k][0];
                            break;
                            }
                }
                }

            }
            }

            else if(q=="2")
            {
            string tmsg,msg="";
            char a,matrix[6][6]={{' ',' ',' ',' ',' ',' '},{' ','a','b','c','d','e'},{' ','f','g','h','i','j'},
                                {' ','k','l','m','n','o'},{' ','p','q','r','s','t'},{' ','u','v','x','y','z'}};
            cout << "Enter the key you want to decipher :";
            for (int i=0;i<5;i++){
                cin>>a;
                matrix[0][i+1]=a;
                matrix[i+1][0]=a;
            }
            cout<<"Enter the massage : ";
            cin.ignore();
            getline(cin,tmsg);
            for(int i=0;i<tmsg.length();i++){
                if (tmsg[i]!=' '){
                    msg+=tmsg[i];
                }
            }
            for(int i=0;i<msg.length();i+=2){
                int c=0,v=0;
                for (int j=0;j<6;j++){
                    if (matrix[0][j]==msg[i])
                        c=j;
                    if (matrix[j][0]==msg[i+1])
                        v=j;
                }
                cout<<matrix[c][v];
                }
            }

        }
        if (version==7)
        {
            string x,mors,m,q;
            int y,k;
            string morse[] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "\t" };
            //two arrays for capital and small
            char eng[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ' };
            char eng2[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
            cout<<"Ahlan ya user ya habibi.\nWhat do you like to do today? \n1- Cipher a message \n2- Decipher a message \n3- End \n>> ";
            while (isOpen)
            {
                cin>>q;
                if (q=="1"||q=="2"||q=="3")
                    isOpen=false;
                else
                    cout<<"choose from 1 or 2 or 3 \n>>";
            }
            if (q=="1")
                //cipher
            {

                cout<<"please enter your sentence  ";
                cin.ignore();
                getline(cin,x);
                y=x.size();
                //input sentence

                for (int i = 0; i<y; ++i)
                {
                    for(int k=0; k<=26; ++k)
                        //2 for to loop for the sentence and the array of eng character
                    {
                        if ( x[i] == eng[k] || x[i] == eng2[k] )
                        {

                            mors+= " "+morse[k];
                            //باخد نفس مكان الحرف من الاراى بتاع التشفير
                        }

                    }
                }
                cout<<mors<<endl;
            }



            else if (q=="2")
                //decipher
            {
                cout<<"please enter your sentence:";
                cin.ignore();
                getline(cin,x);
                y=x.size();
                //input sentence

                for (int i =0; i<y; ++i)
                    // for loop for the sentence
                {
                    if (x[i]==' ')
                    {
                        cout<<" ";
                        // if there is a space print space
                    }
                    else if (x[i]!= ' ')
                        //if x[i] is a character
                    {
                        m+=x[i];
                        //plus the character to string m
                        if(x[i+1]==' ' || (i+1)==(y))
                            //if next x[i] is space or the next index is the end of the sentence
                        {

                            for( int n=0; n<26; ++n)
                                //loop th array of morse
                            {
                                if(morse[n]==m)
                                    //if element of morse array is the same of string m
                                {
                                    cout<< eng[n];
                                    //اطبع المساوي له من الاراري بتاع الحروف الابجدية
                                    m="";
                                    //clean string m for next character
                                }
                            }
                        }


                    }

                }
                cout <<m<<endl;

            }

        }
        if (version==8)
        {
            string q;
            cout<<"Ahlan ya user ya habibi.\nWhat do you like to do today? \n1- Cipher a message \n2- Decipher a message \n3- End \n>> ";
            cin>> q ;
            while (isOpen)
            {
                cin>>q;
                if (q=="1"||q=="2"||q=="3")
                    isOpen=false;
                else
                    cout<<"choose from 1 or 2 or 3 \n>>";
            }
            string msg;
            char key;
            cin.ignore();
            cout<<"Enter the massage : ";
            getline(cin,msg);
            cout<<"Enter the key : ";
            cin>>key;
            if (q=="1")
            {
                cout<<"the cipher massage is : ";
                for (int i=0; i<msg.size(); i++)
                {
                    cout<<hex<<(msg[i]^key)<<" ";
                }
            }
            else if (q=="2")
            {
                cout<<"the decipher massage is : ";
                for (int i=0; i<msg.size(); i++)
                {
                    cout<<hex<<(msg[i]^key)<<" ";
                }
            }
        }
        if (version==9)
        {
            int n, y, q ;
            string x ;
            int w = 1 ;
            while (w == 1)
            {
                cout<<"Ahlan ya user ya habibi.\nWhat do you like to do today? \n1- Cipher a message \n2- Decipher a message \n3- End \n>> ";
                while (true)
                {
                    cin>>n;
                    if (n==1||n==2||n==3)
                        break;
                    else
                        cout<<"choose from 1 or 2 or 3 \n>>";
                }
                if (n == 1)
                {
                    cout << "enter a string:" ;
                    cin >> x ;
                    cout << "enter a key:" ;
                    cin >> y ;
                    vector <string> z;
                    q = x.length() ;
                    string matrix [y][q] ;
                    int i = 1, row = 0, col = 0 ;
                    for (int s = 0 ; s < q ; s++)
                    {
                        if ((row + i < 0) || ( row + i >= y))
                        {
                            i*=-1 ;
                        }
                        matrix [row][col] = x[s];
                        row+=i ;
                        col+=1 ;
                    }
                    for (int c = 0 ; c < y ; c++)
                    {
                        for (int v = 0 ; v < q ; v++)
                        {
                            z.push_back(matrix[c][v]);
                        }
                    }
                    for (int t = 0 ; t < z.size() ; t++)
                    {
                        cout << z[t];
                    }
                    cout << "\n\n";
                }
        if (n == 2)
        {
            cout << "enter a string to decipher :" ;
            cin >> x ;
            cout << "enter a key:" ;
            cin >> y ;
            vector <string> result;
            q = x.length() ;
            string matrix [y][q] ;
            int d = 0, i =1 ;
            for (int s = 0 ; s < y ; s++)
            {
                int row = 0 ;
                for (int col = 0 ; col < q ; col++)
                {
                    if ((row + i < 0) || (row + i >= y))
                    {
                        i*=-1 ;
                    }
                    if (row == s)
                    {
                        matrix[row][col] +=x[d];
                        d += 1;
                    }
                    row += i;
                }
            }
            int j = 1, b = 0, a = 0 ;
            cout << "the message after decipher it is :";
            for (int s = 0 ; s < q ; s++)
            {
                if ((b + j < 0) || ( b + j >= y))
                {
                    j*=-1 ;
                }
                cout << matrix [b][a];
                b+=j ;
                a+=1 ;
            }
            cout << "\n\n";
        }
                if (n == 3)
                {
                    cout << "thank you for using our program :) " << endl;
                    w = 2 ;
                }
            }
            system("pause");
    }
    cout<<endl;
    int p;
    cout<<"again(1) & end(2)=> ";
    cin>>p;
    while ((p!=1)&&(p!=2))
    {
        cout<<"no more option"<<endl;
        cin>>p;
    }
    if (p==2)
    {
        exit(0);
    }
    }
}


