#include<iostream>
using namespace std;

class mat {
    int r;
    int c;
    int **p; // Pointer to pointer for dynamically allocated 2D array
public:
    mat(int r, int l) {
        this->r = r;
        this->c = l;
        p = new int*[r]; // Allocate memory for rows

        for (int i = 0; i < r; i++) {
            p[i] = new int[l]; // Allocate memory for columns
        }
    }

    void getdata(int r, int l) {
        cout << "Enter matrix elements:" << endl;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < l; j++) {
                cin >> p[i][j];
            }
        }
    }

    void display(int r, int l) {
        cout << "Matrix:" << endl;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < l; j++) {
                cout << p[i][j] << " ";
            }
            cout << endl;
        }
    }

   
        void mul(int r, int l, mat m, mat n) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < l; j++) {
            p[i][j] = 0; // Initialize result to 0
            for (int k = 0; k < l; k++) {
                p[i][j] += m.p[i][k] * n.p[k][j];
            }
        }
    }
}

};

int main() {
    mat m(3, 3);
    mat n(3, 3);
    m.getdata(3, 3);
    m.display(3, 3);
    n.getdata(3, 3);
    n.display(3, 3);
    
    mat x(3, 3);
    x.mul(3, 3, m, n);
    x.display(3, 3);

    return 0;
}
