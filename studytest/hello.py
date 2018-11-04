import matplotlib.pyplot as plt
import pandas as pd
import numpy as np

figsize(12.5, 4)

import scipy.stats as stats
a = np.arange(16)
poi = stats.poisson
lambda_ = [1.5, 4.25]
colors = ["#348ABD", "#A60628"]

plt.bar(a, poi.pmf(a, lambda_[0]), color=colors[0], label="$\lambda = %.1f$" % lambda_[0], alpha=0.60,
       edgecolor=colors[0], lw="3")

plt.bar(a, poi.pmf(a, lambda_[1]), color=colors[1],
       label="$\lambda = %.1f$" % lambda_[1], alpha=0.60,
       edgecolor=colors[1], lw="3")
plt.xticks(a + 0.4, a)
plt.legend()
plt.ylabel("Probability of $k$")
plt.xlabel("$k$")
plt.title("Probability mass function of a Poisson random variable,\
         differing \$\lambda$ values");
