#include<bits/stdc++.h>

using namespace std;

#define item int

typedef struct Heap {
	int capacity = 0;
	int size = 0;

	vector<item> value;
	
	bool has_parent(int index) {
		return ( (index-1) / 2 >= 0 );
	}

	int parent(int index) {
		return ( (index-1) / 2 );
	}

	bool has_left_child (int index) {
		return ( index*2+1 < size );
	}

	int left_child (int index) {
		return value[index*2+1];
	}

	bool has_right_child (int index) {
		return ( index*2 + 2 < size );
	}

	int right_child (int index) {
		return value[index*2+2];
	}

	void verify_capacity () {
		if(size == capacity) {
			capacity++;
			value.resize(capacity);
		}
	}

	void swap(int indexA, int indexB) {
		int tmp = value[indexA];
		value[indexA] = value[indexB];
		value[indexB] = tmp;
	}

	void heapify_up(int index) {
		while(has_parent(index) && value[parent(index)] > value[index]) {
			swap(parent(index), index);
			index = parent(index);
		}
	}

	void heapify_down(int index = 0) {
		int smaller_child_index;
		while(has_left_child(index)) {
			smaller_child_index = left_child(index);
			if(has_right_child(index) && value[right_child(index)] < value[left_child(index)])
				smaller_child_index = value[right_child(index)];
			if (value[smaller_child_index] >= value[index])
				return;
			swap(smaller_child_index, index);
			index = smaller_child_index;
		}
	}
	
	void add (int data) {
		verify_capacity();
		value[size++] = data;
		heapify_up(size-1);
	}

	int top () {
		return value[0];
	}
	
	void pop () {
		value[0] = value[--size];
		heapify_down();
	}

} heap;

int main () {
	heap tree;
	item c;
	cin >> c;
	while(c) {
		tree.add(c);
		
		for(auto t:tree.value) cout << t << " ";
		cout << endl;

		cin >> c;
	}
	}
