#ifndef SEARCHTEMPLATE_H
#define SEARCHTEMPLATE_H

template <class T>

int searchRecord(T arr[],
                 int size,
                 T value)
{
    int i;

    for(i = 0; i < size; i++)
    {
        if(arr[i] == value)
        {
            return i;
        }
    }

    return -1;
}

#endif
