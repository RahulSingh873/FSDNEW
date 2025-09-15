#include<bits/stdc++.h>
using namespace std;

void show(int arr[], int size)
{
    cout << "\nElements of array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int insert(int arr[], int size, int pos)
{
    int num;
    if (pos > size || pos < 1)
    {
        cout << "The position must between 1-10" << endl;
        return 0;
    }

    cout << "Enter number to insert:";
    cin >> num;
    if (arr[pos - 1] == 0)
    {
        arr[pos - 1] = num;
        cout << num << " inserted at position " << pos << endl;
    }
    else
    {
        int i;
        for (i = size - 1; i >= pos; i--)
            arr[i] = arr[i - 1];
        arr[i] = num;
        cout << num << " inserted at position " << pos << "after shifting numbers" << endl;
    }

    return 1;
}
int remove(int arr[], int size, int pos)
{
    if (pos > size || pos < 1)
    {
        cout << "Invalid position" << endl;
        return 0;
    }
    if (arr[pos - 1] == 0)
    {
        cout << "number is not available" << endl;
        return 0;
    }
    for (int i = pos - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    cout << "Removal of element is successful!" << endl;
    return 1;
}
int main()
{
    int ch, pos;
    int arr[10] = {0}, size = 10, blanks = 10;
    do
    {
        cout << "\n1.........Insert" << endl
             << "2.........Remove" << endl
             << "3.........Show" << endl
             << "4.........Exit" << endl
             << "Enter your choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            if (blanks > 0)
            {
                cout << "Enter position: ";
                cin >> pos;
                blanks -= insert(arr, size, pos);
                // int isSuccess = insert(arr, size, pos);
                // zeros = zeros - isSuccess;
            }
            else
            {
                cout << "array is full" << endl;
            }
            break;
        case 2:
            cout << "Enter position: ";
            cin >> pos;
            blanks += remove(arr, size, pos);
            break;
        case 3:
            show(arr, size);
            break;
        case 4:
            cout << "See you later..." << endl;
            break;
        default:
            cout << "Invalid choice! Try again" << endl;
        }
    } while (ch != 4);
}
void addlast(int info){
    Node*temp=new Node(int);
    if(head==NULL){
        head=temp;
    }
    return;
    current=head
    while(current->next!=nullptr){
        current=current->next;
    }