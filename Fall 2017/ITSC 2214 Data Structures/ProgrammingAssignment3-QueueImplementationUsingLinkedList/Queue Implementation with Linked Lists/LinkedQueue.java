public class LinkedQueue {
    Node front, rear;
    int size;

    public LinkedQueue(){
        front=null;
        rear=null;
        size=0;
    }

    public boolean isEmpty(){
        if (front==null)
            return true;
        else
            return false;
    }
    public int getSize(){
        return size;
    }

    public void push(int data){
        //CODE
        Node n=new Node(data,null);
        if (isEmpty()==true) {
            front=rear=n;
        }
        else{
            rear.setLink(n);
            rear=n;
        }
        size++;
    }
    public int pop(){
        //CODE
        if (isEmpty()==true){
            System.out.println("The Queue is Empty");
            return 0;
        }
        else if (size==1){
            Node ptr=front;
            front=null;
            rear=null;
            size--;
            return ptr.getData();
        }
        else{
            Node ptr=front;
            front=ptr.getLink();
            size--;
            return ptr.getData();
        }
    }
    public int peek(){
        return (front.getData());
    }
    public void display(){
        if (isEmpty()==true){
            System.out.println("Empty") ;
        }
        else{
            Node helper=new Node(0,null);
            helper=front;
            while (helper!=null) {
                System.out.println(helper.getData());
                helper=helper.getLink();

        }
        }
    }
}
