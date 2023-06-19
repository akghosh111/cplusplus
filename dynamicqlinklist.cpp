// Dynamic Queue implementation

#include<iostream>

 

 

using namespace std;

 

struct NODE

{

  int v;

  NODE *Link;

 

};

class QUEUE

{

 

    NODE *frnt,*rear;

 

public:

 

    QUEUE()

    {

        frnt=NULL;

        rear=NULL;

    }

 

    void INSERT();

    void DELETE();

    void SHOW();

};

 

void QUEUE::INSERT()

{

    NODE *ptr=new NODE;

 

    cout<<"\nEnter a number:";

    cin>>ptr->v;

    ptr->Link=NULL;

 

    if(rear==NULL)

    {

        rear=frnt=ptr;

    }

    else

    {

       rear->Link=ptr;

       rear=ptr;

    }

}

 

void QUEUE::DELETE()

{

    if(frnt==NULL)

    {

        cout<<"\nQueue is empty";

        return;

    }

 

    NODE *ptr=frnt;

    frnt=frnt->Link;

    cout<<"\nValue deleted is:"<<ptr->v;

    delete ptr;

 

}

 

void QUEUE::SHOW()

{

    if(frnt==NULL)

    {

        cout<<"\nQueue is empty";

        return;

    }

 

    NODE *ptr=frnt;

    cout<<"\nValues of the Queue are:";

    while(ptr!=NULL)

    {

        if(ptr->Link==NULL)

        cout<<ptr->v;

        else

        cout<<ptr->v<<"->";

        ptr=ptr->Link;

    }

 

}

 

int main()

{

    QUEUE q;

    int i=1,ch;

 

    do

    {

        cout<<"\n*********Select From Below**********\n";

        cout<<"\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT";

        cout<<"\nEnter your Choice:";

        cin>>ch;

        switch(ch)

        {

 

        case 1:

            q.INSERT();

            break;

        case 2:

            q.DELETE();

            break;

        case 3:

            q.SHOW();

            break;

        case 4:

            i=0;

            break;

        default:

            cout<<"\nWrong Choice Try Again\n";

        }

    }while(i!=0);

    return 0;

}

 
