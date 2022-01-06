/*
 * Rules to define virtual functions
 *
 * they can not be static
 * they are accessed by object pointers 
 * virtual functions can be a friend of another class
 * virtual function in base class might not be used 
 * if a virtual function is defined in the base class, there is no necessity of redefining it in the derived class
 *
 */
#include <iostream>

using namespace std;

class CWH {
    protected:
        string title;
        float ratings;
    public:
        CWH(string s, float r) {
            title = s;
            ratings = r;
        }

        virtual void display(void) {

        }
};

class CWHVideo : public CWH {
    private:
        float videoLength;
    public:
        CWHVideo(string s, float r, float vl) : CWH(s, r) {
            videoLength = vl;
        }

        void display(void) {
            cout << "Title of this tutorial: " << title << endl
                << "Ratings of this video tutorial is " << ratings << " out of 5" << endl
                << "Length of this video is " << videoLength << " minutes" << endl;
        }
};

class CWHText : public CWH {
    private:
        int wordCount;
    public:
        CWHText(string s, float r, int wc) : CWH(s, r) {
            wordCount = wc;
        }

        void display(void) {
            cout << "Title of this tutorial: " << title << endl
                << "Ratings of this video tutorial is " << ratings << " out of 5" << endl
                << "Words of this Article is " << wordCount << " words" << endl;
        }
};

int main() {
    int WC;
    float rating, vlen;
    string title;
    //for video 
    title = "Django Tutorial";
    rating = 4.5;
    vlen = 30.04;
    CWHVideo video(title, rating, vlen);
    video.display();

    //for text
    title = "Django Tutorial Textual";
    rating = 4.49;
    WC = 576;
    CWHText text(title, rating, WC);
    text.display();

    // with pointers


    CWH* ptr[2];
    ptr[0] = &video;
    ptr[1] = &text;
    ptr[0] -> display();
    ptr[1] -> display();
    return 0;
}

