#include <iostream>
#include"Tree.h"
using namespace std;

int main()
{
    int x[9] = {5,3,9,10,4,7,1,8,6};
    adrNode root = NULL;
    infotype info, data;

    cout << "====================================== TP MOD 15 ======================================" << endl;
    cout << "Nama\t\t: Wahyu Nata Mahendra" << endl;
    cout << "NIM\t\t: 1301213101" << endl;
    cout << "Kelas\t\t: IF-45-09" << endl;
    cout << "Kode Asprak\t: MRR\n" << endl << endl;
    cout << "//Output Program" << endl;
    cout << "=======================================================================================" << endl;
    for (int i = 0; i < 9; i++){
        info.newdata = x[i];
        adrNode newdata = newNode_1301213101(info);
        insertNode_1301213101(root, newdata);
        cout << x[i] << " ";
    }

    cout << endl;
    cout << "\nPre Order\t\t: ";
    printPreOrder_1301213101(root);

    cout << endl;
    cout << "\nDescendant of Node 9\t: ";
    data.newdata = 9;
    printDescendant_1301213101(root, data);

    cout << endl;
    cout << "\nSum of BST Info\t\t: ";
    cout << sumNode_1301213101(root);

    cout << "\nNumber of Leaves\t: ";
    cout << countLeaves_1301213101(root);

    cout << "\nHeight of Tree\t\t: ";
    cout << heightTree_1301213101(root);
    cout << endl;
    cout << "=======================================================================================" << endl;
    return 0;
}
