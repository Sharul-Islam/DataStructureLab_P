

#include <iostream>

using namespace std;

int main()
{
    int img[4][4] = {{2,3,3,3},{4,4,4,0},{9,6,4,1},{2,3,3,3}};


    for (int i = 0; i < 4; ++i) {

        for (int j = 0; j < 4; ++j) {
            cout << "test[" << i << "][" << j << "] = " << img[i][j] << endl;
        }
    }

    return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
 char a;
 cout << "Enter a character: ";
 cin >> a;
 cout << "Ascii value : "<< int(a);
 return 0;

}
/*
