# Define the ListNode class
class ListNode:
    def __init__(self, x):
        self.data = x
        self.next = None

# Define the Solution class
class Solution:
    def deleteK(self, head, k):
        counter = 1
        current = head
        while current.next != None:
            counter += 1
            current = current.next
        iteration = 1
        position = 1
        totalIteration = counter // k
        current = head
        rp = 0
        rp = rp + k
        while current.next != None and iteration <= totalIteration:
            if iteration == totalIteration and counter - position < 2:
                current.next = None
                break
            if position == rp - 1:
                current.next = current.next.next
                position += 2
                current = current.next
                iteration += 1
                rp = rp + k
                continue
            else:
                current = current.next
                position += 1

        return head

# Define a function to display the linked list
def display(head):
    current = head
    while current:
        print(current.data, end=" -> ")
        current = current.next
    print("None")

# Create a linked list
def create_linked_list(arr):
    if not arr:
        return None
    head = ListNode(arr[0])
    current = head
    for i in range(1, len(arr)):
        current.next = ListNode(arr[i])
        current = current.next
    return head

# Test cases
def test_deleteK():
    sol = Solution()
    
    # Test case 1
    arr1 = [1, 2, 3, 4, 5]
    head1 = create_linked_list(arr1)
    print("Original linked list:")
    display(head1)
    head1 = sol.deleteK(head1, 2)
    print("Linked list after deleting every 2nd node:")
    display(head1)
    print()

    # Test case 2
    arr2 = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    head2 = create_linked_list(arr2)
    print("Original linked list:")
    display(head2)
    head2 = sol.deleteK(head2, 3)
    print("Linked list after deleting every 3rd node:")
    display(head2)
    print()

    # Add more test cases as needed

test_deleteK()
