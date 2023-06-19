// Dynamic Stack implementation

#include<iostream>

 

 

using namespace std;

 

struct NODE

{

  int v;

  NODE *Link;

 

};

class STACK

{

 

    NODE *Top;

 

public:

 

    STACK()

    {

        Top=NULL;

    }

 

    void PUSH();

    void POP();

    void SHOW();

};

 

void STACK::PUSH()

{

    NODE *ptr=new NODE;

 

    cout<<"\nEnter a number:";

    cin>>ptr->v;

    ptr->Link=NULL;

 

    if(Top==NULL)

    {

        Top=ptr;

    }

    else

    {

       ptr->Link=Top;

       Top=ptr;

    }

}

 

void STACK::POP()

{

    if(Top==NULL)

    {

        cout<<"\nSTACK is Underflow or empty";

        return;

    }

 

    NODE *ptr=Top;

    Top=Top->Link;

    cout<<"\nValue deleted is:"<<ptr->v;

    delete ptr;

 

}

 

void STACK::SHOW()

{

    if(Top==NULL)

    {

        cout<<"\nSTACK is Underflow or empty";

        return;

    }

 

    NODE *ptr=Top;

    cout<<"\nValues of the STACK are:";

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

    STACK s;

    int i=1,ch;

 

    do

    {

        cout<<"\n*********Select From Below**********\n";

        cout<<"\n1.PUSH\n2.POP\n3.SHOW VALUES\n4.EXIT";

        cout<<"\nEnter your Choice:";

        cin>>ch;

        switch(ch)

        {

 

        case 1:

            s.PUSH();

            break;

        case 2:

            s.POP();

            break;

        case 3:

            s.SHOW();

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
