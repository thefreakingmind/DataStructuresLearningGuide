#Node for The LinkedLists
class Node:
    def __init__(self, value, link=None):
        self.value = value
        self.link = link


    def get_value(self):
        return self.value


    def get_link(self):
        return self.link

    def update_values(self,link):
        self.link = link

#Our LinkedList Class
class LinkedList:
    def __init__(self, value=None):
        self.head_node = Node(value)

    def head_node(self):
        return self.head_node

    def insert_at_beginning(self,new_value):
        self.new_node = Node(new_value)
        new_node.update_values(self.head_node)
        self.head_node = new_node

