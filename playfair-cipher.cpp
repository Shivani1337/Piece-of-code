#include<bits/stdc++.h>
using namespace std;
const char key[5][5]={{'P','L','A','Y','F'},
                      {'I','R','E','X','M'},
                      {'B','C','D','G','H'},
                      {'K','N','O','Q','U'},
                      {'T','U','V','W','Z'}};

void get_pos(char p, int& r, int& c){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(p == key[i][j]){
                r = i;
                c = j;
                break;
            }
        }
    }
    return;
}

void same_row(int r, vector<char>& code, int c1, int c2){
    code.push_back(key[r][(c1 + 1) % 5]);
    code.push_back(key[r][(c2 + 1) % 5]);
    return;
}

void same_column(int c, vector<char>& code, int r1, int r2){
    code.push_back(key[(r1 + 1) % 5][c]);
    code.push_back(key[(r2 + 1) % 5][c]);
    return;
}

void diff_col_row(int r1, int c1, vector<char>& code, int r2, int c2){
    code.push_back(key[r1][c2]);
    code.push_back(key[r2][c1]);
    return;
}

void same_row_decode(int r, vector<char>& code, int c1, int c2){
    code.push_back(key[r][(c1 + 4) % 5]);
    code.push_back(key[r][(c2 + 4) % 5]);
    return;
}

void same_column_decode(int c, vector<char>& code, int r1, int r2){
    code.push_back(key[(r1 + 4) % 5][c]);
    code.push_back(key[(r2 + 4) % 5][c]);
    return;
}


void decode(vector<char> encodedMessage, int len){
	vector<char> code;

    int i = 0, j = 0;
    int r1, c1, r2, c2;
    
    while (i < len){
        get_pos(encodedMessage[i], r1, c1);
        get_pos(encodedMessage[i+1], r2, c2);
		     i+=2;
        if (r1 == r2)
            same_row_decode(r1, code, c1, c2);
        else if (c1 == c2)
            same_column_decode(c1, code, r1, r2);
        else
            diff_col_row(r1, c1, code, r2, c2);
    }
    cout<<"\nPlain Text: ";
    for (j = 0;j < code.size();j++){
        if(code[j]!='X')
            cout<<code[j];
    }
    return;
}

vector<char> encode(vector<char> changedMessage, int len){
    vector<char> code;
    int i = 0, j = 0,r1, c1, r2, c2;
    while (i < len){
        get_pos(changedMessage[i], r1, c1);
        get_pos(changedMessage[i+1], r2, c2);
        i+=2;
        if (r1 == r2)
            same_row(r1, code, c1, c2);
        else if (c1 == c2)
            same_column(c1, code, r1, r2);
        else
            diff_col_row(r1, c1, code, r2, c2);

    }
    cout<<"Cipher Text: ";
    for (j = 0;j < code.size();j++)
        cout<<code[j];
    return code;
}

void get_input(vector<char>& a){
    char ch;
    while (1){
        ch = getchar();
        if (ch >= 97 && ch <= 122)
            ch -=32;
        if (ch == '\n')
            break;
        else if (ch ==' ')
            continue;
        else if (ch == 'J')
            a.push_back('I');
        a.push_back(ch);
    }
    return;
}

void convert_string(vector<char>& msg, vector<char>& changedMessage){
    int i, j;
    i = j = 0;
    while (i < msg.size()){
        changedMessage.push_back(msg[i]);
        i++;
        if (i == msg.size()){
            changedMessage.push_back('X');
            break;
        }
        if (msg[i] == changedMessage[j]){
            changedMessage.push_back('X');
            j++;
        }
        else if(msg[i] != changedMessage[j]){
            j++;
            changedMessage.push_back(msg[i]);
            i += 1;
        }
        j++;
    }
}

int main(){
    vector<char> msg,changedMessage;
    int i, j;
    cout<<"\nEnter the Message: ";
    get_input(msg);
    convert_string(msg, changedMessage);
    int len = changedMessage.size();
    vector<char> encodedMessage = encode(changedMessage, len);
	  decode(encodedMessage, len);
    return 0;
}
