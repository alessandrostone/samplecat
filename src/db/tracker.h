
#define BACKEND_IS_TRACKER (backend.search_iter_new == tracker__search_iter_new)

gboolean tracker__init             ();
void     tracker__disconnect       ();

int      tracker__insert           (Sample*);
gboolean tracker__delete_row       (int id);
gboolean tracker__file_exists      (const char*);

gboolean tracker__update_ignore    (Sample*);
gboolean tracker__update_ignoreC   (int, const char*);
gboolean tracker__update_ignoreI   (int, const int);
gboolean tracker__update_ignoreF   (int, const float);
gboolean tracker__update_ignoreB   (int, const char*, guint8*, guint);


gboolean tracker__search_iter_new  (char* search, char* dir, const char* category, int* n_results);
Sample * tracker__search_iter_next (unsigned long** lengths);
void     tracker__search_iter_free ();

void     tracker__dir_iter_new     ();
char*    tracker__dir_iter_next    ();
void     tracker__dir_iter_free    ();

#if NEVER // updates are ignored !
gboolean tracker__update_string    (int id, const char*, const char*);
gboolean tracker__update_int       (int id, const char*, int);
gboolean tracker__update_float     (int id, const char*, float);
#endif

#if 1 // deprecate soon
gboolean tracker__update_colour    (int id, int colour);
gboolean tracker__update_keywords  (int id, const char*);
gboolean tracker__update_online    (int id, gboolean, time_t);
gboolean tracker__update_peaklevel (int id, float);
#endif
