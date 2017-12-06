TITLE=slides

GENERATED_EXTS= .aux .log .nav .out .snm .toc

slides: $(TITLE).tex
	pdflatex $(TITLE).tex

clean:
	rm -f $(foreach s,${GENERATED_EXTS},${TITLE}${s})

.PHONY: slides clean
