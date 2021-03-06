// Kakaofriends_ColoringBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>

using namespace std;

bool cmp(const int a, const int b) {
	return a > b;
}

int main() {
	
	vector<int> vec1; //int 자료형을 저장하는 동적배열
	
	vector<double> vec2; //double 자료형을 저장하는 동적배열
	
	vector<Node> vec3; //사용자가 정의한 Node 구조체를 저장하는 동적배열
	
	vector<int> vec4(n); //벡터의 초기 크기를 n으로 설정
	
	vector<int> vec5(n, 1); //벡터의 초기 크기를 n으로 설정하고 1로 초기화
	
	vector<vector<int> > vec6(n, vector<int>(m, 0)); //크기가 n*m인 2차원 벡터를 선언하고 0으로 초기화
	
	vec1.push_back(5); //벡터의 맨 뒤에 원소(5) 추가
	
	vec1.pop_back(); //벡터의 맨 뒤 원소 삭제
	
	printf("%d\n", vec1.size()); //벡터의 크기 출력
	
	vec1.resize(n); //벡터의 크기를 n으로 재설정
	
	vec1.clear(); //벡터의 모든 원소 삭제
	
	vec1.begin(); //벡터의 첫 원소의 주소, 마지막 원소의 다음 주소 리턴
	vec1.end();

	vec1.erase(vec1.begin(), vec1.end());//[a, b) 주소 구간에 해당하는 원소 삭제 == 모든 원소 삭제
	
	vector<int> vec7 = vector<int>(vec1.begin() + 2, vec1.end()); //vec7은 vec1의 2번째 원소부터 마지막 원소까지 복사하여 생성

	
	stack<int> st; //int자료형을 저장하는 스택 생성
	
	st.push(4); //원소(4) 삽입
	
	st.pop(); //맨 위 원소 팝
	
	printf("%d\n", st.top()); //맨 위 원소 값 출력
	
	printf("%d\n", st.empty()); //스택이 비어있다면 1 아니면 0
	
	printf("%d\n", st.size()); //스택에 저장되어 있는 원소의 수 출력

	
	queue<int> q; //int자료형을 저장하는 큐 생성
	
	q.push(4); //원소(4) 삽입
	
	q.pop(); //맨 위 원소 팝
	
	printf("%d\n", q.front()); //맨 위 원소 값 출력
	
	printf("%d\n", q.empty()); //큐가 비어있다면 1 아니면 0
	
	printf("%d\n", q.size()); //큐에 저장되어 있는 원소의 수 출력
	
	
	/* 
	deque
	동적배열이다. 
	임의의 위치에 있는 원소 접근과, 
	앞과 뒤에서 원소를 추가하는 연산은 O(1)을 보장한다. 
	*/
	deque<int> dq; //int 자료형을 저장하는 동적배열 생성
	
	dq.push_front(5); //배열 맨 앞에 원소(5) 추가
	
	dq.push_back(5); //배열 맨 뒤에 원소(5) 추가
	
	dq.pop_front(); //배열 맨 앞의 원소 삭제
	
	dq.pop_back(); //배열 맨 뒤의 원소 삭제

	//나머지는 vector와 동일하다.

	/*
	set
	균형잡힌 이진트리이다.
	원소 삽입과 삭제, 탐색 등의 연산은 O(log(n))을 보장한다.
	*/
	set<int> s; // int 자료형을 저장하는 균형잡힌 이진트리 생성

	s.insert(5); // 원소(5) 삽입

	if (s.find(6) != s.end()) // 6값을 가지는 원소를 찾고 있다면 해당 원소의 주소값, 없다면 s.end() 리턴
		printf("존재합니다.\n");
	else
		printf("없습니다.\n");
	
	printf("%d\n", s.size());// 저장된 원소의 수를 리턴

	s.clear(); // 모든 원소 삭제
	
	s.erase(++s.begin()); // 2번째 원소 삭제
	
	/*
	2개의 데이터를 저장할 수 있는 변수이다.
	비교 연산시 1순위 first, 2순위 second로 판별한다.
	*/
	pair<int, int> p; // int, int 자료형을 저장하는 변수 선언

	p = make_pair(4, 5); // (4, 5)를 p에 저장 
	                     // p = { 4, 5 }; // c++ 11부터 가능

	/*
	map
	딕셔너리 자료구조이다. 
	원소 삽입과 삭제, 탐색 등의 연산은 O(log(n))을 보장한다.
	*/
	map<int, int> m;
	m.insert(make_pair(4, 5)); // m[4] = 5;
	printf("%d\n", m.find(4)); // key와 연관된 원소를 pair<키 자료형, 데이터 자료형> 형태로 리턴함
	printf("%d\n", m.count(4)); // key와 연관된 원소의 개수를 리턴함
	printf("%d\n", m.size()); // 모든 원소 삭제
	m.clear(); // 모든 원소 삭제
	m.erase(++m.begin());

	/*
	algorithm
	여러가지 알고리즘이 들어있는 헤더파일이다.
	*/

	int arr1[100000];
	vector<int> arr2[100000];
	int n = 100000;

	// sort
	sort(arr1, arr1 + n); // 첫 원소의 주소와 마지막 원소의 다음 주소를 인자로 넘겨준다.
	sort(arr2->begin(), arr2->end());
	
	sort(arr1, arr1 + n, cmp); // 비교 함수도 만들어서 같이 넘겨줄 수 있다.

	// stable_sort
	// 사용법은 같다
	stable_sort(arr1, arr1 + n);

	// lower_bound
	// 첫 원소의 주소와 마지막 원소의 다음 주소와 비교할 원소를 넘겨준다.
	// 구간 내의 원소들은 정렬되어 있어야한다.
	// 리턴 값은 해당 원소의 주소값이다. 없다면 arr1+n을 리턴한다.
	// 또는 arr2.end()를 리턴한다.
	int idx = lower_bound(arr1, arr1 + n, 42) - arr1;
	printf("%d\n", idx);

	// upper_bound
	// 사용법은 같다.
	vector<int>::iterator it = upper_bound(arr2->begin(), arr2->end(), 54);
	if (it != arr2->end())
		printf("%d\n", *it);

	// max_element
	// 첫 원소의 주소와 마지막 원소의 다음 주소를 인자로 넘겨준다.
	// 구간 내의 최대값을 가지는 원소의 주소를 리턴한다.
	printf("%d\n", *max_element(arr1, arr1+n));

	// min_element
	// 사용법은 같다.
	printf("%d\n", *min_element(arr2->begin(), arr2->end()));

	// unique
	// 첫 원소의 주소와 마지막 원소의 다음 주소를 인지로 넘겨준다.
	// 구간 내의 중복된 원소를 구간의 끝부분으로 밀어주고 마지막 원소의 다음 주소를 리턴한다.
	// 구간 내의 원소들은 정렬되어 있어야한다.
	// 보통 erase와 함께 중복된 원소를 제거하는 방법으로 사용한다.
	arr2->erase(unique(arr2->begin(), arr2->end(), arr2->end()));

	// next_permutation
	// 첫 원소의 주소와 마지막 원소의 다음 주소를 인자로 넘겨준다.
	// 구간 내의 원소들이 다음 순열을 생성하고 true를 리턴한다.
	// 다음 순열이 없다면 false를 리턴한다.
	// 구간 내의 원소들은 정렬되어 있어야한다.
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}
	do {
		for (int i = 0; i < 10; i++) {
			printf("%d", arr[i]);
		}
		printf("\n");
	} while (next_permutation(arr, arr + 10));
	
	return 0;
}