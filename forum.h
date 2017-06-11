#ifndef FORUM_H
#define	FORUM_H
#define SIZE 4

using namespace std;

class date {
public:
    void set(int, int, int);
    void get(int&, int&, int&);
private :
    int day, month, year;
};

class post{
private:
    int id;
    string post_creator, text;
    char* post_title;
    class date post_date;
public:
    post();
    void set_post(const string,const char*,const string,int);
    void set(int, int, int);
    string get_post();
    string get_post_txt();
    string get_post_creator();
    int  get_post_id();
    void get(int&, int&, int&);
};

class thread{
private:
    string subject, thread_creator;
    class date thread_date;
    class post posts[SIZE];
public:
    thread();
    void set_thread(const string, const string, int i);
    void set_post(const string,const char*,const string,int,int);
    void set(int, int, int);
    string get_thread_subject();
    string get_thread_creator();
    string get_post(int i);
    string get_post_txt(int i);
    string get_post_creator(int i);
    int  get_post_id(int i);
    void get(int&, int&, int&);   
};

class forum{
private:
    class thread threads[SIZE];
    char* forum_title;
public:
    forum(const char*);
    virtual ~forum();
    void set_forum();
    char* get_title();
    void set_thread(const string, const string, int i);
    string get_thread_subject(int i);
    string get_thread_creator(int i);
    int  get_post_id(int i,int j);
    void search(string );
    void get(int&, int&, int&, int);
    void print();
    void delete_thread(int i);
};

#endif	/* FORUM_H */

