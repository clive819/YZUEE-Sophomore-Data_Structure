/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/09/19
 */
#ifndef bookrec_h
#define bookrec_h
class bookrec{
    public:
        struct book_rec{
            int book_id;
            int cost;
            int page;
        };
        void swap(struct book_rec *a, struct book_rec *b);
        void sort(struct book_rec array[]);
    
};
#endif /* bookrec_h */
