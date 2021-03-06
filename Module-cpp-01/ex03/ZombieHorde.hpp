/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 18:47:02 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 00:49:30 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

// LIBS ========================================================================
#include "Zombie.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class ZombieHorde;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class ZombieHorde
{
    public:
        ZombieHorde();
        ZombieHorde(int n);
        ZombieHorde(const ZombieHorde&);
        virtual ~ZombieHorde();
        ZombieHorde &operator=(const ZombieHorde& op);

        void announce();

    private:
        Zombie  *_zombies;
        int     _nbr_zomzom;
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif