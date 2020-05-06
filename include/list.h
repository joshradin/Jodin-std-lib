#ifndef __LIST_HEADER__
#define __LIST_HEADER__

in std {

    class Node;

    class List {
        private Node head;
        private Node tail;

        public List();

        public void add(Object o);
    };


}




#endif // __LIST_HEADER__