void Display(struct Queue *st) {

    for(int i = st->S[st->front]; i < st->Rear; i++) {
        printf("%d",st->S[i]);
    }

}