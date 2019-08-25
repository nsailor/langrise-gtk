#ifndef _lr_lemma_instance_h
#define _lr_lemma_instance_h

#include <glib.h>
#include <glib-object.h>

#include "lr-lemma.h"
#include "lr-text.h"

G_BEGIN_DECLS

#define LR_TYPE_LEMMA_INSTANCE (lr_lemma_instance_get_type ())
G_DECLARE_FINAL_TYPE (LrLemmaInstance, lr_lemma_instance, LR, LEMMA_INSTANCE, GObject)

LrLemmaInstance *
lr_lemma_instance_new (int id, LrText *text, const gchar *words, const gchar *note);

void lr_lemma_instance_set_id (LrLemmaInstance *self, int id);
int lr_lemma_instance_get_id (LrLemmaInstance *self);

void lr_lemma_instance_set_text (LrLemmaInstance *self, LrText *text);
LrText *lr_lemma_instance_get_text (LrLemmaInstance *self);

void lr_lemma_instance_set_words (LrLemmaInstance *self, const gchar *words);
const gchar *lr_lemma_instance_get_words (LrLemmaInstance *self);

void lr_lemma_instance_set_note (LrLemmaInstance *self, const gchar *note);
const gchar *lr_lemma_instance_get_note (LrLemmaInstance *self);

G_END_DECLS

#endif /* _lr_lemma_instance_h */