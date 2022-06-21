

#include"Stack.cpp"
#include"Queue.cpp"

int main()
{
    srand(time(NULL));
    Stack st("({x-y-z}*[x+2y]-(z+4x));");
    st.Proverka();

    Queue st2(5, 5, true);
    cout << "Dostatochnbli intervar mejdy marshrutkami :" << endl;
    cout<<"1 marshrutka v " << st2.dosInter(10) <<" minutbl"<<endl<<endl;
    st2.srTime();
}

