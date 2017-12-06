TITLE=lpc18-sk-lookup
PAPER=$(TITLE).pdf
SLIDES=$(TITLE)-slides.pdf

all: $(PAPER) $(SLIDES)

$(PAPER):
	make -C paper/
	mv paper/paper.pdf $(PAPER)

$(SLIDES):
	make -C slides/
	mv slides/slides.pdf $(SLIDES)

open-paper: $(PAPER)
	xdg-open $(PAPER)

open-slides: $(SLIDES)
	xdg-open $(SLIDES)

open: open-paper open-slides

clean:
	make -C paper clean
	make -C slides clean

.PHONY: $(PAPER) $(SLIDES)
