#include <iostream> 
using namespace std;

#define MAX 10

class bubsort
{

    int arr[MAX], n;
    public:
        void getdata();
        void showdata();
        void sortLogic();
};

void bubsort :: getdata()
{
    std::cout << "How many elements do you require: ";
    std::cin >> n;
    for(int i=0;i<n;i++) {
        std::cin >> arr[i];
    }
}

void bubsort :: showdata() 
{
    std::cout << "\n -- DISPLAY -- \n";
    for(int i=0;i<=n;i++) {
        if(arr[i] != 0) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << "\r\n";
}

void bubsort :: sortLogic() 
{
    int temp;
    int exchange;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                exchange++;
                std::cout << "\n arr[j] = " << arr[j] << " arr[j+1] = " << arr[j+1];
            }
        }
        std::cout << endl;
        if(exchange == 0) {
            break;
        }
    }
}

int main()
{
    std::cout << "\n ****** Bubble Sort ******\n";
    bubsort obj;
    obj.getdata();
    obj.sortLogic();
    obj.showdata();
}
