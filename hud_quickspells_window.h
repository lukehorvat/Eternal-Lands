#ifndef	__HUD_QUICKSPELLS_WINDOW_H
#define	__HUD_QUICKSPELLS_WINDOW_H

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_QUICKSPELL_SLOTS 12

typedef struct {
	char spell_name[60];
	Sint8 spell_image;
	Sint8 spell_id;
	Uint8 spell_str[30];
	// store the entire string ready to be sent to the server,
	// including CAST_SPELL and len bytes, len will be byte 2
} mqbdata;

extern int quickspell_win; /*!< quickbar windows handler */
extern int num_quickspell_slots;
extern mqbdata * mqb_data[MAX_QUICKSPELL_SLOTS+1];

int action_spell_keys(Uint32 key);
void load_quickspells(void);
void save_quickspells(void);
void init_quickspell(void);
int get_quickspell_y_base(void);
int shorten_quickspell(void);
void add_quickspell(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif	//__HUD_QUICKSPELLS_WINDOW_H