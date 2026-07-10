# Lesson 2: How LEDs Work (Semiconductor Physics)

## What this lesson covers

Why incandescent light bulbs are inefficient, and how LEDs generate light through semiconductor physics instead of heat.

---

## Key concepts

### Why incandescent bulbs are inefficient

A light bulb isn't really a light-generating device; it's a heat-generating device that happens to produce a little light as a side effect.

- About **95%** of input energy becomes heat.
- Only **5%** becomes light.

This wastes a lot of energy and money, motivating better light-generation methods like LEDs.

---

### Conductors, Insulators, and Semiconductors

- **Conductors** (copper, aluminum): Allow current to flow easily.
- **Insulators** (plastic, rubber, glass): Block current flow.
- **Semiconductors**: Sit between the two, and their conductivity can be controlled.

---

### Energy Bands in a Crystal

A crystal is a highly ordered solid made of atoms.

Electrons occupy specific allowed energy levels, grouped into two bands separated by a **band gap**.

- **Valence Band**
  - Where electrons normally sit.

- **Conduction Band**
  - Higher-energy band.
  - If electrons reach this band, current can flow.

At rest, electrons mainly stay in the valence band, while only a small number have enough energy to reach the conduction band.

Applying voltage can move electrons into the conduction band, leaving behind a **hole** in the valence band.

Nearby electrons then move to fill these holes, allowing both electrons and holes to contribute to current flow.

Higher temperature increases semiconductor conductivity because more electrons gain enough energy to cross the band gap.

---

### Doping: N-type and P-type Material

Adding impurity atoms to a semiconductor (**doping**) creates two types of material.

#### N-type Material

- Doped with donor atoms.
- Provides extra free electrons.

#### P-type Material

- Doped with acceptor atoms.
- Creates extra holes.

---

### The PN Junction and Forward Bias

When P-type and N-type materials are joined and a positive voltage is applied to the P side (negative to the N side):

- The energy barrier at the junction becomes lower.
- Electrons can move across the junction.
- Electrons recombine with holes.
- Energy is released as photons (light).

Increasing forward voltage reduces the barrier further, allowing more recombination and producing brighter light.

---

### Reverse Bias

Applying voltage in the opposite direction:

- Increases the energy barrier.
- Prevents current flow.
- The LED does not light up.

---

### LED Polarity in Circuits

- **Long leg** = Positive (**Anode**) → connects to the P-type side.
- **Short leg** = Negative (**Cathode**) → connects to the N-type side.

Never connect an LED directly to a voltage source.

Always use a **current-limiting resistor** in series.

Without a resistor, excessive current flows and the LED can burn out.

---

### Band Gap and Color

The size of the **band gap** determines the energy of the emitted photon.

Photon energy determines wavelength, which determines the color of the LED.

| Band Gap | Photon Energy | Wavelength | Color |
|----------|---------------|------------|-------|
| Large | High | Short | Blue |
| Small | Low | Long | Red |

Different semiconductor materials are engineered with different band gaps to produce different LED colors.

---

## What I Learned / Friction Points

This lesson was dense — band gaps, doping, and the PN junction took multiple passes to follow.

The concept I found hardest to understand was why applying forward voltage lowers the energy barrier at the junction, rather than simply "pushing" electrons through directly.

I understand LED polarity and current-limiting resistors solidly because those are concepts I will apply directly when wiring circuits.

However, the underlying semiconductor physics — especially why electron-hole recombination produces photons — is something I want to revisit once I have more time.