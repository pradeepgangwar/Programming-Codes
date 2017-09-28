#include <bits/stdc++.h>
using namespace std;

struct trie{
	struct trie *edges[26];
	int priority;
	bool end;
};

typedef struct trie TRIE;

void insert_word(TRIE *root, string s, int p)
{
	TRIE *tmp = root;
	int l = s.length();

	for(int i=0 ; i <l ; i++)
	{
		int index = s[i] - 'a';
		if(tmp->edges[index] == NULL)
		{
			TRIE *t = new TRIE;
			t->priority = p;
			t->end = false;
			for(int j=0;j<26;j++)
				t->edges[j] = NULL;

			tmp->edges[index] = t;
			tmp = tmp->edges[index];
		}
		else
		{
			if(tmp->edges[index]->priority < p)
				tmp->edges[index]->priority = p;
			tmp = tmp->edges[index];
		}
	}
	tmp -> end = true;
}

int find(TRIE *root, string s)
{
	int i,l = s.length();

	TRIE *t = root;

	for(i=0;i<l;i++)
	{
		int index = s[i] - 'a';

		if(t->edges[index] == NULL || t->end==true)
			return -1;

		else
		{
			t = t->edges[index];
		}
	}
	return t->priority;
}


int main()
{
	int n,q,p,i;
	string s,st;

	TRIE *root = new TRIE;
	//root = (TRIE *)malloc(sizeof(TRIE));

	root->priority = -1;
	root->end = false;
	for(i=0;i<26;i++)
		root->edges[i] = NULL;

	cin>>n>>q;

	while(n--)
	{
		cin>>s>>p;
		insert_word(root,s,p);
	}

	while(q--)
	{
		cin>>st;
		cout<<find(root,st)<<endl;
	}
}