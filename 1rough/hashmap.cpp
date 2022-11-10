#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
	unordered_map<string, int> ourmap;
	
	// insert
	pair<string, int> p("abc", 1);
	ourmap.insert(p);
	ourmap["def"] = 2;

	// find or access
	cout << ourmap["abc"] << endl;
	cout << ourmap.at("abc") << endl;
	
	//cout << ourmap.at("ghi") << endl;
	cout << "size : " << ourmap.size() << endl;
	cout << ourmap["ghi"] << endl;
	cout << "size : " << ourmap.size() << endl;

	// check Presense
	if (ourmap.count("ghi") > 0) {
		cout << "ghi is present" << endl;
	}

	// erase
	ourmap.erase("ghi");
	cout << "size : " << ourmap.size() << endl;
	if (ourmap.count("ghi") > 0) {
		cout << "ghi is present" << endl;
	}

}
//pair sum is zero
#include<unordered_map>

int pairSum(int *arr, int n) {
    int sum=0;
    unordered_map<int,int> um;
	for(int i=0;i<n;i++){
        if(um[-arr[i]]>0){
            sum+=um[-arr[i]];
        }
        um[arr[i]]++;
    }
    return sum;
}
//// implementration

#include <string>
using namespace std;

template <typename V>
class MapNode {
	public:
		string key;
		V value;
		MapNode* next;

		MapNode(string key, V value) {
			this->key = key;
			this->value = value;
			next = NULL;
		}

		~MapNode() {
			delete next;
		}
};

template <typename V>
class ourmap {
	MapNode<V>** buckets;
	int count;
	int numBuckets;

	public:
	ourmap() {
		count = 0;
		numBuckets = 5;
		buckets = new MapNode<V>*[numBuckets];
		for (int i = 0; i < numBuckets; i++) {
			buckets[i] = NULL;
		}
	}

	~ourmap() {
		for (int i = 0; i < numBuckets; i++) {
			delete buckets[i];
		}
		delete [] buckets;
	}

	int size() {
		return count;
	}

	V getValue(string key) {
		int bucketIndex = getBucketIndex(string key);
		MapNode<V>* head = buckets[bucketIndex];
		while (head != NULL) {
			if (head->key == key) {
				return head->value;
			}
			head = head->next;
		}
		return 0;
	}

	private:
	int getBucketIndex(string key) {
		int hashCode = 0;

		int currentCoeff = 1;
		for (int i = key.length() - 1; i >= 0; i--) {
			hashCode += key[i] * currentCoeff;
			hashCode = hashCode % numBuckets;
			currentCoeff *= 37;
			currentCoeff = currentCoeff % numBuckets;
		}

		return hashCode % numBuckets;
	}

	public:
	void insert(string key, V value) {
		int bucketIndex = getBucketIndex(string key);
		MapNode<V>* head = buckets[bucketIndex];
		while (head != NULL) {
			if (head->key == key) {
				head->value = value;
				return;
			}
			head = head->next;
		}
		head = buckets[bucketIndex];
		MapNode<V>* node = new MapNode<V>(key, value);
		node->next = head;
		buckets[bucketIndex] = node;
		count++;
	}

	V remove(string key) {
		int bucketIndex = getBucketIndex(string key);
		MapNode<V>* head = buckets[bucketIndex];
		MapNode<V>* prev = NULL;
		while (head != NULL) {
			if (head->key == key) {
				if (prev == NULL) {
					buckets[bucketIndex] = head->next;
				} else {
					prev->next = head->next;
				}
				V value = head->value;
				head->next = NULL;
				delete head;
				count--;
				return value;
			}
			prev = head;
			head = head->next;
		}
		return 0;
	}

};

