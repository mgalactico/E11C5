//Writes out first 100 Fibonacci numbers. Is supposed to fail as it store value in vector of ints. It does not.
#include <iostream>
#include <vector>

int main() {

    //The implementation below does not generate an error that I can catch no matter where I put the try/catch pair.
    //The loop exits as the 'right' place simply because a value too large fails to be allocated to an int. The allocated value is bogus, a negative #, and the loop terminates due to the N<M comparison.
    try
    {
        int n = 1;
        int m = 2;
/*
        //The two large #s below are close to the end before a failure is triggered. Used fo debuggin.
        int n = 433494437;
        int m = 701408733;
*/

        while (n<m) {
            std::cout << n << '\n';
            int x = n+m;
            n = m;	// drop the lowest number
            m = x;	// add a new highest number
        }

        std::cout << "the largest Fibonacci number that fits in an int is " << n << '\n';
    }
    catch (std::runtime_error e) {	// this code is to produce error messages
        std::cout << e.what() << '\n';
    }

/*
    //The implementation below does not generate an error that I can catch no matter where I put the try/catch pair.
    int limit = 100;
    int test;
    std::vector<int> fibs = {1, 1};

    for (int x: fibs)
        std::cout << fibs[x] << std::endl;

        for (int i = 1; i < limit; ++i) {
            try {
                fibs.push_back(fibs[i] + fibs[i - 1]);
                test = fibs[i + 1];
                std::cout << i << "\t" << test << std::endl;
            }
            catch (std::bad_alloc e){
                std::cout << e.what();
            }
        }
*/

    return 0;
}