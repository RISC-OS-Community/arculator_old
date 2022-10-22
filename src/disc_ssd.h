// Paolo's fix: addition to make disc_ssd.c compile:
typedef struct
{
         void (*seek)(int drive, int track);
         void (*readsector)(int drive, int sector, int track, int side, int density);
         void (*writesector)(int drive, int sector, int track, int side, int density);
         void (*readaddress)(int drive, int track, int side, int density);
         void (*format)(int drive, int track, int side, int density);
         void (*stop)();
         void (*poll)();
} DRIVE;

void ssd_init();
void ssd_load(int drive, char *fn);
void ssd_close(int drive);
void dsd_load(int drive, char *fn);
void ssd_seek(int drive, int track);
void ssd_readsector(int drive, int sector, int track, int side, int density);
void ssd_writesector(int drive, int sector, int track, int side, int density);
void ssd_readaddress(int drive, int sector, int side, int density);
void ssd_format(int drive, int sector, int side, int density);
void ssd_stop();
void ssd_poll();

// Paolo's fix: additions to make disc_ssd.c compile
extern void (*fdc_data)(uint8_t dat);
extern void (*fdc_spindown)();
extern void (*fdc_finishread)();
extern void (*fdc_notfound)();
extern void (*fdc_datacrcerror)();
extern void (*fdc_headercrcerror)();
extern void (*fdc_writeprotect)();
extern int  (*fdc_getdata)(int last);
extern void (*fdc_sectorid)(uint8_t track, uint8_t side, uint8_t sector, uint8_t size, uint8_t crc1, uint8_t crc2);
extern void (*fdc_indexpulse)();
extern int fdc_ready;
extern int fdc_indexcount;

