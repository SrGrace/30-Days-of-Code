/*  Sourav_Verma  IPG_2013108
    ABV-IIITM , Gwalior  */
    
    
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None 
class Solution: 
    def display(self,head):
        current = head
        while current:
            print(current.data,end=' ')
            current = current.next
    
    def insert(self,head,data): 
    #Complete this method

        print (data, end=" ") 
        
