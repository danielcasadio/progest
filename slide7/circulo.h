typedef struct circulo Circle;

Circle* crc_create(float x, float y, float r);
void crc_free(Circle* c);
void crc_accs(Circle* c, float *x, float *y, float* r);
void crc_change(Circle* c, float x, float y, float r);
float crc_area(Circle* c);
void crc_inside(Circle* c, float x, float y);