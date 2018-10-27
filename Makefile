TITLE=lpc18-sk-lookup
PAPER=$(TITLE).pdf

all: $(PAPER)

.PHONY: $(PAPER)
$(PAPER):
	make -C paper/
	mv paper/paper.pdf ${PAPER}

open-paper: $(PAPER)
	xdg-open ${PAPER}

open: open-paper

clean:
	make -C paper clean
