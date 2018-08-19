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


my_node = Node(20)
print(my_node)
