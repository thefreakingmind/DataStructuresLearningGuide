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

class LinkedList:
    def __init__(self, value=None):
        self.head_node = Node(value)

    def head_node(self):
        return self.head_node

