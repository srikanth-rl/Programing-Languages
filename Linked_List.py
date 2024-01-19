class Linked_List:
    def __init__(self,x):#initialization or Constructor
        self.data=x
        self.next=None
class List:
    def __init__(self):
        self.head=None
        self.tail=None
    def insert_left(self,x):
        node = Linked_List(x)
        if self.head is None:
            self.head=node
        else:
            node.next = self.head
            self.head = node
    def insert_right(self,x):
        node=Linked_List(x)
        if self.head is None:
            self.head=node
        else:
            self.tail.next=node
        self.tail=node
    def Print(self):
        temp=self.head
        while temp is not None:
            print(temp.data,end=' ')
            temp=temp.next
        print()
list1=List()
list2=List()
# n=int(input())#-->For taking only n inputs in next,next value...
list=(list(map(int,input().split())))#-->For taking "any no" of inputs in a Single value...
for _ in list:
    # _ = int(input())
    list1.insert_right(_)
    list2.insert_left(_)
print("For Inserting Right : ",end='')
list1.Print()
print("For Inserting Left  : ",end='')
list2.Print()
list.sort()
print('Original Sorted List :',list)
# [print(i)for i in list]#-->For Printing in next,next value...